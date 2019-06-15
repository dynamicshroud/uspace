// mov(1) - move a file
// apart of uspace(1)
// made by vortex

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if(argc < 3)
		return 1;

	FILE* old;
	FILE* new;
	int ofsize;

	old = fopen(argv[1], "r");
	new = fopen(argv[2], "w");

	fseek(old, 0, SEEK_END);
	ofsize = ftell(old);
	rewind(old);

	char* data = malloc(ofsize);

	while(1)
	{
		if(fgets(data, ofsize, old) == NULL) break;
		fputs(data, new);
	}
	return 0;
}
