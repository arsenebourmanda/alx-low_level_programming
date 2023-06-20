#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int x;
x = 0;
while (x < 10)
{
int i;
i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
x++;
}
}
