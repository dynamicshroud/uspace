// move(1) - move a file to another destination
// apart of uspace(1)
// made by vortex

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
	
	char* buffer = malloc(ofsize);

	while(1)
	{
		if(fgets(buffer, ofsize, old) == NULL) break;
		fputs(buffer, new);
	}
	
	fclose(old);
	
	unlink(argv[1]);

	fclose(new);

	
	return 0;
}
