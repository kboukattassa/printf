#include "main.h"
/**
 * print_string - prints a string
 * @str: the string to print
 * Return: returns a string
 */
int print_string(char *str)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
	{
		putchar(i);
	}
	putchar("\n");

}
