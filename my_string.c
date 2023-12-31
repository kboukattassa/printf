#include "main.h"
/**
 * print_string - prints a string
 * @str: the string to print
 * Return: returns a string
 */
int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		char *null_str = "(null)";

		while (*null_str)
		{
			_putchar(*null_str);
			i++;
			null_str++;
		}
	}
	else
	{
		while (*str)
		{
			_putchar(*str);
			i++;
			str++;
		}
	}
	return (i);
}
