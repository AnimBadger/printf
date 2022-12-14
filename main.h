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
int _print_binary(va_list bin);
int op_uint(va_list num);
int op_octal(va_list num);
int op_hex(va_list num);
int op_HEX(va_list num);

int print_uint(unsigned int num);
int print_octal(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);

int _printf(const char *format, ...);

/* macro creation */
#define MAX_BIT 32 /* maximum bit of an integer */

/**
 * struct spec - structure that define specifiers
 * @id: case identifier
 * @fptr: function pointer
 * Description: datatype defined to act as a selector type
 * for operations
 */

typedef struct spec
{
	char id;
	int (*fptr)(va_list);
} specifiers;

#endif
