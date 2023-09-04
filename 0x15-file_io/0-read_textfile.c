#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file print to STDOUT.
 * @filename: file being read
 * @letters: letters to be read
 * Return: w- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *k;
ssize_t u;
ssize_t v;
ssize_t s;
u = open(filename, O_RDONLY);
if (u == -1)
return (0);
k = malloc(sizeof(char) * letters);
s = read(u, k, letters);
v = write(STDOUT_FILENO, k, s);

free(k);
close(u);
return (v);
}
