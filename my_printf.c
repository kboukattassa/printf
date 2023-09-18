#include "my_main.h"
/**
 *
 *
 *
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
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	return (i);
}
