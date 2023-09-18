#include "main.h"
/**
 * format_specifier - handle the specifiers
 * @i: a normal counter
 * @spec: character specifier
 * @args: arguments
 */
void format_specifier(va_list args, char spec, int *i)
{
	switch (spec)
	{
		case 'c':
			i += _putchar(va_arg(args, int));
			break;
		case 's':
			i += print_string(va_arg(args, char*));
			break;
		case '%':
			i += _putchar('%');
			break;
		default:
			_putchar('%');
			_putchar(spec);
			i+= 2;
			break;
	}
}
