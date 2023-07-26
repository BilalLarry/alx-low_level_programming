#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char *concatenateStrings(char *dest, const char *src)
{
if (dest == NULL || src == NULL)
{
return NULL; // Handle invalid input pointers
}
	char *result = dest;
// Move the dest pointer to the end of the destination string
while (*dest != '\0')
{
dest++;
}
// Copy characters from src to dest until the end of src is reached
	while (*src != '\0') 
{
	*dest = *src;
	dest++;
	src++;
}
// Add the terminating null byte to the concatenated string
*dest = '\0';
	return result;
}
int main()
{
char str1[50] = "Hello, ";
    const char *str2 = "world!"
// Concatenate str2 to str1 and store the result in str1
	char *result = concatenateStrings(str1, str2);
	if (result != NULL) {
	printf("Concatenated string: %s\n", result);
	} else {
	printf("Error: Invalid input pointers.\n");
	}
	return 0;
}

