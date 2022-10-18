#ifndef __MAIN__
#define __MAIN__

/* standard library header file */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* functions prototype */
int _puts(va_list s);
int _putchar(va_list chr);
int _print_mod(va_list mod);
int _print_int(va_list num);
int _printf(const char *format, ...);

/**
 * spec - structure that define specifiers
 * @:id: case identifier
 * @fptr: function pointer
 */

typedef struct spec
{
	char id;
	int (*fptr)(va_list);
}specifiers;

#endif
