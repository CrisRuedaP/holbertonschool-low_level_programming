#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of the file
 * @letters: number of letters
 * Return: size of the string.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer; /*apuntador al memo/area donde se va a efectuar la transf*/
ssize_t count, writef, closef;
int file;

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);
if (file == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

count = read(file, buffer, letters);
if (count == -1)
return (0);

writef = write(STDOUT_FILENO, buffer, count);
if (writef == -1)
return (0);

closef = close(file);
if (closef == -1)
return (0);

free(buffer);
return (count);
}
