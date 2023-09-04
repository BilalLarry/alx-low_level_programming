#include "main.h"

/**
 * append_text_to_file - Attaches text at the end of a file.
 * @filename:  points to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int v, s, k = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (k = 0; text_content[k];)
			k++;
}

v = open(filename, O_WRONLY | O_APPEND);
s = write(v, text_content, k);

if (v == -1 || s == -1)
return (-1);
close(v);

return (1);
}
