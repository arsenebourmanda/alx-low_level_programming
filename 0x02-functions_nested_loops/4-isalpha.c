#include "main.h"

/**
 * _isalpha - Write a function that checks for lowercase character.
 * @c: Number to pass to _islower function
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
{
return (1);
}

return (0);
}
