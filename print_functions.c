#include "main.h"

/**
* _putchar -  user output function for character
* Description: it is used to print character output to "stdio"
* @c: input type of variable need of type "char"
* Return: char c
*/

int _putchar(int c)
{
	return (write(1, &c, 1));
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

