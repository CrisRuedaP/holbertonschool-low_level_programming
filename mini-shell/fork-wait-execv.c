#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char * argv[])
{
  char *ls_argv[] = {"/bin/ls", "-l", "/tmp", NULL};
  pid_t p_child, pid;
  int status;
  int i = 0;

  while (i < 5)
    {
      i++;
      p_child = fork();
      if (p_child == 0)
	{
	  printf("Child: executing ls\n");
	  execve(ls_argv[0], ls_argv, NULL);
	  perror("execve failed");
	}
      else if (p_child > 0)
	{
	  if ((pid = wait(&status)) < 0)
	    {
	     perror("wait");
	     _exit(1);
	    }
	  printf("%u %u\n", getpid(), p_child);
	}
      else {
	perror("fork failed");
	_exit(1);
      }
    }
   return (0);
}
