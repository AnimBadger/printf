#include "main.h"

/**
* _putchar -  user output function for character
* Description: it is used to print character output to "stdio"
* @c: input type of variable need of type "char"
* Return: char c
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - user output function for strings
 * Description: it is used to print string output to "stdio"
 * @str: input type of vsriable need of type
 * Return: char str
 */
int _puts(char *str)
{
	int index;
	int count;

	count = 0;
	index = 0;
	while (str[index] && str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
		count++;
	}
	return (count);
}

/**
 * _strlen - count lenght of a string
 * @str: Parameter passed to function
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
