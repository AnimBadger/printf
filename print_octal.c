#include "main.h"

/**
 * print_octal - does the printing of unsigned int
 * @n: variable for unsigned int
 * Return: count
 */
int print_octal(unsigned int n)
{
	unsigned int ex;
	int count;
	int i;
	int buff;
	int div;

	count = 0;
	i = 0;
	buff = 0;
	div = 1;
	while ((n / div) > 8)
	{
		div = div * 8;
	}
	while (div != 0)
	{
		i = n / div;
		buff = i + '0';
		write(1, &buff, 1);
		ex = i * div;
		n = n - ex;
		div = div / 8;
		count++;
	}
	return (count);
}

/**
 * op_octal - print unsigned int
 * @num: number to print;
 * Return: count;
 */
int op_octal(va_list num)
{
	unsigned int val;
	int count;

	count = 0;
	val = va_arg(num, unsigned int);
	count = print_octal(val);
	return (count);
}
