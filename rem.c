// rem - remove a file
// apart of uspace
// made by vortex

#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	if(argc < 2)
		return 1;

	for(int i = 0; i <= argc; i++)
		unlink(argv[i - 1]);

	return 0;
}
