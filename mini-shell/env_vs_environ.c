#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char *argv, char *env[])
{
  int i; 
  for (i = 0; env[i] != NULL; i++)
    {
    printf("\n%s", env[i]);  
    }
  return 0; 
}
