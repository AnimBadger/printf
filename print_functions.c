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
	for (index = 0; str[index] != '\0'; index++)
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
	int integer;
	int count;
	int expo;
	int buff;
	char negative;

	count = 0;
	expo = 1;
	negative = '-';
	integer = va_arg(num, int);
	if (integer < 0)
	{
		integer *= -integer;
		write(1, &negative, 1);
		count += 1;
	}
	while ((integer / expo) > 9)
	{
		expo *= 10;
	}
	while (expo != 0)
	{
		buff = integer / expo + '0';
		write(1, &buff, 1);
		count += 1;
		integer = integer % expo;
		expo = expo / 10;
	}
	return (count);
}

/**
 * _print_binary - prints binary numbers
 * @num: variable for number
 * Return: count;
 */
int _print_binary(va_list bin)
{
	int i, j, rem, count, elements;
	unsigned int n;
	unsigned int *ptr;

	count = 0;
	elements = 0;
	n = va_arg(bin, int);
	if (n == 0)
		_printf("%d", 0);
	if (n > 0)
	{
		ptr = malloc(sizeof(unsigned int) * MAX_BIT);
		if (!ptr)
			return (-1);
		for (i = 0; n > 0; i++)
		{
			rem = n % 2;
			ptr[i] = rem;
			n /= 2;
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
