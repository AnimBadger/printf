#include "main.h"

/**
 * _strlen - count lenght of a string
 * @str: Parameter passed to function
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * intlen - count how many digits makes up an integer value
 * @val: variable for interger value
 * Return: int val
 */
int intlen(int val)
{
	int counter;

	counter = 0;
	if (val == 0)
	{
		counter = 1;
		return (counter);
	}
	while (val != 0)
	{
		val /= 10;
		counter++;
	}
	return (counter);
}
