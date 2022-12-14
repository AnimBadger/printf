#include "main.h"


/**
* _putchar -  user output function for character
* Description: it is used to print character output to "stdio"
* @chr: input type of variable need of type "char"
* Return: 1 to end
*/

int _putchar(va_list chr)
{
	char character;

	character = va_arg(chr, int);

	write(1, &character, 1);
	return (1);
}

/**
 * _puts - user output function for strings
 * Description: it is used to print string output to "stdio"
 * @s: a variable argument list element
 * Return: char str
 */
int _puts(va_list s)
{
	char *str;
	int index;
	int count;

	str = va_arg(s, char*);
	count = 0;
	index = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (index = 0; str[index] != '\0'; ++index)
	{
		write(1, &str[index], 1);
		count += 1;
	}
	return (count);
}

/**
 * _print_mod - print '%'
 * @ap: unused list argument
 * Return: 1 on success
 */
int _print_mod(va_list ap)
{
	char mod;

	mod = '%';
	(void) ap;
	write(1, &mod, 1);
	return (1);
}

/**
 * _print_int - a function that prints integers
 * @num: a variable of list argument
 * Return: value
 */
int _print_int(va_list num)
{
	int n, ex;
	int count;
	int i;
	int buff;
	int div;
	unsigned int new_n;

	n = va_arg(num, int);
	new_n = n;
	count = 0;
	i = 0;
	buff = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		new_n = new_n * (-1);
		count += 1;
	}
	div = 1;
	while ((new_n / div) > 9)
	{
		div = div * 10;
	}
	while (div != 0)
	{
		i = new_n / div;
		buff = i + '0';
		write(1, &buff, 1);
		ex = i * div;
		new_n = new_n - ex;
		div = div / 10;
		count++;
	}
	return (count);
}

/**
 * _print_binary - prints binary numbers
 * @bin: variable for number
 * Return: count;
 */
int _print_binary(va_list bin)
{
	int i, j, rem, count, elements;
	int n;
	unsigned int *ptr;
	unsigned int new_n;

	count = 0;
	elements = 0;
	n = va_arg(bin, int);
	new_n = n;

	if (n == 0)
	{
		write(1, "0", 1);
		count += 1;
	}
	if (new_n > 0)
	{
		ptr = malloc(sizeof(unsigned int) * MAX_BIT);
		if (!ptr)
			return (-1);
		for (i = 0; new_n > 0; i++)
		{
			rem = new_n % 2;
			ptr[i] = rem;
			new_n /= 2;
			rem = 0;
			count += 1;
			elements += 1;
		}
		for (j = elements - 1; j >= 0; j--)
		{
			_printf("%d", ptr[j]);
		}
	}
	return (elements);
}
