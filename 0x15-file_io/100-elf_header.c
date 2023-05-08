#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
/**
 * error - print error messages
 * @msg: message
 *
 * Return: nothing
 */

void error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * filetype - print file type
 * @hdr: ELF64 type
 *
 * Return: nothing
 */

void filetype(Elf64_Ehdr *hdr)
{
	switch (hdr->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}

/**
 * print_elf_header - determine and print elf header
 *@hdr: elf 64 type
 *
 * Return: nothing
 */

void print_elf_header(Elf64_Ehdr *hdr)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", hdr->e_ident[i]);

	printf("\n");
	printf("  Class:                             %s\n", hdr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");
	printf("  Data:                              %s\n", hdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %d (current)\n", hdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (hdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}

	printf("  ABI Version:                       %d\n", hdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");

	filetype(hdr);

	printf("  Entry point address:               0x%lx\n", hdr->e_entry);
	printf("\n");
}
/**
 * main - entry to all functions
 * @argc: standard main input
 * @argv: standard main vector input
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr hdr;

	if (argc != 2)
		error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error(strerror(errno));

	if (read(fd, &hdr, sizeof(hdr)) != sizeof(hdr))
		error(strerror(errno));

	if (hdr.e_ident[EI_MAG0] != ELFMAG0 ||
			hdr.e_ident[EI_MAG1] != ELFMAG1 ||
			hdr.e_ident[EI_MAG2] != ELFMAG2 ||
			hdr.e_ident[EI_MAG3] != ELFMAG3)
		error("Not an ELF file");

	print_elf_header(&hdr);

	close(fd);
	return (0);
}
