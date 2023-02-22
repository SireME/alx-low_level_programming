#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * jack_bauer - print every minute in jack
 * Description: print minutes of 24 hours
 * Return: integer
 **/

void jack_bauer(void)

{
	int hs_tens, hs_ones, mtes_tens, mtes_ones, hs_max;

	hs_max = 58;
	hs_tens = '0';
	while (hs_tens < '3')
	{
		if (hs_tens == '2')
		{
			hs_max = '4';
		}
		hs_ones = '0';
		while (hs_ones < hs_max)
		{
			mtes_tens = '0';
			while (mtes_tens < '6')
			{
				mtes_ones = '0';
				while (mtes_ones < 58)
				{
					_putchar(hs_tens);
					_putchar(hs_ones);
					_putchar(':');
					_putchar(mtes_tens);
					_putchar(mtes_ones);
					_putchar('\n');
					mtes_ones++;
				}
				mtes_ones = '0';
				mtes_tens++;
			}
			mtes_tens = '0';
			hs_ones++;
		}
		hs_ones = '0';
		hs_tens++;
	}
}

