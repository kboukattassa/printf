#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on success, error otherwise
 */
int main(void)
{
	printf("First letter is %c\n", 'K');
	_printf("First letter is %c\n", 'K');
	_printf("%b", INT_MAX);
	_printf("%b", INT_MIN);
	return (0);
}

