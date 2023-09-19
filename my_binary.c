#include "main.h"
/**
 * print_binary - func that convert ints to binary
 * @num: int to be converted
 * @Return: number of digits in the binary number
 */
int print_binary(unsigned int num)
{
	int i = 0, count = 0;
	int binary_reverse[32];

	if (num < 0)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		binary_reverse[i] = num % 2;
		num = num / 2;
		i++;
	}
	i--;
}
