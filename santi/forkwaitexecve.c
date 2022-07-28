#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int status;
    	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int x;
	
	for (x = 0; x > 5; x++)
		if (fork() == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("ERRORRRR");
			}
		}
		else
		{
			wait(&status);

		}
}
