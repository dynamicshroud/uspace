// pr(1) - print to stdout
// apart of uspace(1)
// made by vortex

#include <stdio.h>

int main(int argc, char** argv)
{
	if(argc < 2)
		return 1;

	fprintf(stdout, argv[1]);

	return 0;
}
