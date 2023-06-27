Task 2
#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
