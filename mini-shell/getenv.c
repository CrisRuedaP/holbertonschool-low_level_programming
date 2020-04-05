#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

char *_getenv(const char *name)
{
  int i = 0;
  const char s[] = "=";
  char *token;

  if (name != NULL)
    {
      while(environ[i] != NULL)
	{
	  token = strtok(environ[i], s);
	  if(strcmp(token, name) == 0)
	    {
	      token = strtok(NULL,s);
	      printf("%s\n", token);
	     return (token);
	    }
	  i++;
	}
      }
  return (0);
}

int main(void)
{
  char *env; 
    
  env = _getenv("USER");
  printf("%s", env);

}

