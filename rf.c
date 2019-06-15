// rf(1) - read file into stdout
// by vortex
// apart of uspace(1)

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char** argv)
{
	if(argc < 2)
		return 1;

	FILE* f;
	int fsize;
	
	f = fopen(argv[1], "r");
	fseek(f, 0, SEEK_END);
	fsize = ftell(f);

	rewind(f);

	char* data = malloc(fsize);

	while(1)
	{
		if(fgets(data, fsize, f) == NULL) break;
 		printf("%s", data);
	}

	return 0;
}
