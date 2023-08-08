#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *bb;
ssize_t aa;
ssize_t a;
ssize_t b;
aa = open(filename, O_RDONLY);
if (aa == -1)
return (0);
bb = malloc(sizeof(char) * letters);
b = read(aa, bb, letters);
a = write(STDOUT_FILENO, bb, b);
free(bb);
close(aa);
return (a);
}
