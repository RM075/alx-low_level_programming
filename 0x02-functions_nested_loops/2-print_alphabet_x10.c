#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (leter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}