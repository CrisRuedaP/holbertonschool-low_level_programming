#include "holberton.h"
/**
 * main - copies the content of a file to another file
 * @argc: integer count
 * @argv: char of pointer
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, nbytes;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((nbytes = read(fd_from, buffer, 1024)) > 0)
{
if (write(fd_to, buffer, nbytes) != nbytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (nbytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
exit(EXIT_SUCCESS);
}
