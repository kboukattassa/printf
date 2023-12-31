#ifndef MY_MAIN_H
#define MY_MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_int(int a);
int print_binary(unsigned int num);
void format_specifier(va_list args, char spec, int *i);
#endif
