#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/* helpers */
int _putchar(char c);
int _puts(char *str);
int pr_num(int n);
int pr_unsigned_num(unsigned int n);
int base_len(int n, int dev);
char *int_to_binary(int n);
char *arr_rev(char *arr);
char *int_to_octal(unsigned int n);
char *int_to_hex(int n);
char *int_to_heX(int n);
char *convert(unsigned long int num, int base, int uppercase);
int rot13(char *str);
/* printers */
int pr_char(va_list arg);
int pr_string(va_list arg);
int pr_percent(va_list arg);
int pr_int(va_list args);
int pr_unsigned_int(va_list args);
int pr_binary(va_list args);
int pr_octal(va_list args);
int pr_hexa(va_list args);
int pr_heXa(va_list args);
int pr_string_special(va_list args);
int pr_hexa_char(char c);
int pr_pointer(va_list args);
int pr_reverse(va_list args);
int pr_rot13(va_list arg);
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

