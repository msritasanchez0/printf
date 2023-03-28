#include "main.h"
#include <unistd.h>

/**
 * print_char - print char
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
