#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer = NULL;
    size_t bufsize;
    char *path;
    char *pathdup;

    printf("$  ");
    getline(&buffer, &bufsize, stdin);
    printf("%s", buffer);
    path = getenv("PATH");
    pathdup = strdup (path);
    pathdup = strtok (pathdup, ":");

    while (pathdup)
    	{
	 printf ("%s", pathdup);
	 pathdup = strtok(NULL, ":");

	}

    return(0);
}
