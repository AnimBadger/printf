#ifndef __MAIN__
#define __MAIN__

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _puts(char *str);
int _putchar(int c);
int _strlen(char *str);
int intlen(int val);
int _printf(const char *format, ...);

/**
 * struct spec - structure that define specifiers
 * @:id: id specifier
 * @fptr: function pointer
 */

typedef struct spec
{
	char id*;
	int (*fptr)(va_list);
}specifiers;

#endif
