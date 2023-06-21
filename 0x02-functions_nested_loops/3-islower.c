#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: Number to pass to _islower function
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
_putchar(1);
else
_putchar(0);
return (0);
}
