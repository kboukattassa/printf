#include "main.h"
int print_string(char *str);
/**
 * _printf - produces output according to a format
 * @format: the format string
 * @...: the var arguments
 *
 * Return: number of characters printed, -1 if error
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				i++;
			}
			else if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
				{
					print_string("(null)");
					i += 6;
				}
				else
				{
					i += print_string(str);
				}
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);

				print_binary(num);
				i++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				if (num == 0)
				{
					_putchar('0');
					i++;
				}
				else
				{
					i += print_int(num);
				}
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				i += 2;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}
