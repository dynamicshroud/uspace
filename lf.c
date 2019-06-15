/**
* lf(1) - list files in a directory
* apart of the uspace project
* written under the MIT license
* made by vortex
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>

#define MAXP 4096

int main(int argc, char** argv)
{
	char* dir = malloc(MAXP);
	
	if(argc < 2)
		dir = getcwd(dir, MAXP);
	else
		dir = argv[1];

	DIR* d = opendir(dir);
	struct dirent* e;

	while((e = readdir(d)) != NULL)
	{
		fprintf(stdout, "%s\n", e->d_name);
	}

	return 0;
}
