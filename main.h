#ifndef __MAIN__
#define __MAIN__

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _puts(va_list s);
int _putchar(va_list chr);
int _printf(const char *format, ...);

/**
 * struct spec - structure that define specifiers
 * @:id: id specifier
 * @fptr: function pointer
 */

typedef struct spec
{
	char id;
	int (*fptr)(va_list);
}specifiers;

#endif
