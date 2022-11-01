#include "main.h"

/**
 * print_HEX - does the printing hexadecimal number in lower letter
 * @n: variable for unsigned int
 * Return: count
 */
int print_HEX(unsigned int n)
{
	unsigned int ex, count, i, j, buff, div;
	unsigned int numbers[6] = {10, 11, 12, 13, 14, 15};
	char sub[6] = { 'A', 'B', 'C', 'D', 'E', 'F'};

	count = i = buff = ex = 0;
	div = 1;
	while ((n / div) > 16)
	{
		div = div * 16;
	}
	while (div != 0)
	{
		i = n / div;
		buff = i + '0';
		if (i > 9 && buff > (9 + '0'))
		{
			for (j = 0; j < 6; j++)
			{
				if (i == numbers[j])
				{
					write(1, &sub[j], 1);
					ex = i * div;
					n = n - ex;
					div = div / 16;
					count++;
				}
			}
		}
		else
		{
			write(1, &buff, 1);
			ex = i * div;
			n = n - ex;
			div = div / 16;
			count++;
		}
	}
	return (count);
}

/**
 * op_HEX - hexadecimal formatting
 * @num: number to print;
 * Return: count;
 */
int op_HEX(va_list num)
{
	unsigned int val;
	int count;

	count = 0;
	val = va_arg(num, unsigned int);
	count = print_HEX(val);
	return (count);
}
