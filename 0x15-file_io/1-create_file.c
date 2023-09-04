#include "main.h"

/**
 * create_file - Create a file.
 * @filename: points to the name of the file to create.
 * @text_content: points to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int kk, yk, vk = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (vk = 0; text_content[vk];)
vk++;
}

kk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
yk = write(kk, text_content, vk);

if (kk == -1 || yk == -1)
return (-1);

close(kk);

return (1);
}
