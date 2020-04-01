#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file, size, i = 0;

if (text_content == NULL)
text_content = "";

file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
return (-1);

if (filename == NULL)
return (-1);

while (text_content[i] != '\0')
i++;

size = write(file, text_content, i);
if (size == -1)
return (-1);

close(file);
return (1);
}
