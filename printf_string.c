#include "main.h"
/**
 * print_rev_string - Print reverses string.
 * @args: Arguments
 * Return: Lenght of the output
 */

int printf_string(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}
	return (printed);
}

