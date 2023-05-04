#include "main.h"

/**
 * get_endianness - get the endianess of current machine
 *
 * Return: 1 or 0 based on computer endianess state
 */

int get_endianness(void)
{
	/* byte to use for endianess determination*/
	int byte = 1;

	/* return endianess state*/
	return (*(char *)&byte);
}
