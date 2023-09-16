#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>

/* helpers */
void _putchar(char c);
void _puts(char *str);
int _atoi(char *s);

/* printers */
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);

/* struct */

/**
 * struct func_holder - structor for functions
 *
 * @symb: characters to the specifier
 * @print_func: pointer to printer functions
 *
 */
struct func_holder
{
	char *symb;
	int (*print_func)(va_list arg);
};

typedef struct func_holder func_printer;

/* main files */
int _printf(const char *format, ...);
int prf_looper(const char *format, func_printer printers[], va_list ap);







#endif /* PRINTF_H */

