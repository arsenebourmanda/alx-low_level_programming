#include "main.h"

/**
 * int _isalpha - Write a function that checks for lowercase character.
 * @c: Number to pass to _islower function
 * Return: Always 0.
 */
int _isalpha(int c)
{
for(c = 65; c <= 122; c++)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else if ((c >= 65) && (c <= 90))
{
return (1);
}
}
return (0);
}
