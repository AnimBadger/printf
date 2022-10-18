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
 * @str: a variable argument list element
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
	while (str[index] && str[index] != '\0')
	{
		write(1, &str[index],1);
		index++;
		count += 1;
	}
	index++;
	return (count);
}

