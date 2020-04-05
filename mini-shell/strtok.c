#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char str[15] = "hello Colombia";
  const char s[] = " ";
  char *token;

  token = strtok(str, s);
  while (token != NULL)
    {
      printf(" %s\n", token);
      
      token = strtok(NULL, s);
    }
  return (0);
}

