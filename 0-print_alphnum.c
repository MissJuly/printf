#include "main.h"

/*
 * print_char - print a character
 * @l: va_list arguments from _printf
 * @f: pointer to the correct function
 * Return: number of char printed
 */

int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));

	return (l);
}

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the correct function
 * Return: number of char printed
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);
	(void)f;
		    
	if (!s)
	s = "(null)";

	return (_puts(s));
}

/**
 * print_percent - prints percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in
 * which we turn the flags on
 * Return: number of char printed
 */

int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;

	return (_putchar('%'));
}
