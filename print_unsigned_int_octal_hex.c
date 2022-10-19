#include "main.h"
/**
 * print_unsigned_int - print imterger without signes
 * @num: variable for the value
 * Return: count
 */
int print_unsigned_int(unsigned int num)
{
	int integer;
	int count;
	int expo;
	int buff;

	count = 0;                                        expo = 1;
	integer = va_arg(num, int);
	if (integer < 0)
	{
		integer *= -1;
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

int main(void)
{
	print_unsigned_int(23);
	return (o);
}
