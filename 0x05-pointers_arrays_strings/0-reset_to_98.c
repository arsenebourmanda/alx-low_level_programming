#include "main.h"
/**
 * reset_to_98 - taking int as parameter and updating the value it points to
 *@n: pointer parameter to be updated
 * Return: Void
 */
void reset_to_98(int *n)
{
int a;
n = &a;
*n = 98;
_putchar("n=%d", *n);
}
