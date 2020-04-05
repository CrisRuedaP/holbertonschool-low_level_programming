#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
  ssize_t bytes_read;
  size_t nbytes;
  char *str;

  printf("$ ");
  nbytes = 0;
  str = NULL;
  bytes_read = getline(&str, &nbytes, stdin);

  if (bytes_read == -1)
    {
      printf("Error.");
    }
  else
    {
      printf("Pusistes: %s", str);
    }
  return (0);
}
  
  
