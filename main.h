#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* helpers */
int _putchar(char c);
void _puts(char *str);
int pr_num(int n);
int pr_unsigned_num(unsigned int n);
/* printers */
int pr_char(va_list arg);
int pr_string(va_list arg);
int pr_percent(va_list arg);
int pr_int(va_list args);
int pr_unsigned_int(va_list args);

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


#endif /* MAIN_H */

