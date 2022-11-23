#include "main.h"

/**
 * print_char - prints a char
 * @l: list of arguments
 * @f: pointer to correct function
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	int aux;

	aux = va_arg(l, int);

	_putchar(aux);

	return (int);
}
