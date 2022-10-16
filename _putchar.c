#include <unistd.h>
/**
 * _putchar - user defined output function
 * Description: it is used to print output to "stdio"
 * @c: input type of variable need of type "char"
 * Return: char c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
