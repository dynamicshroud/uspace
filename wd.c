// wd - get current directory
// apart of uspace
// made by vortex

#include <stdio.h>
#include <unistd.h>

#define CWD_LEN	4096

int main()
{
	char buf[CWD_LEN + 1];
	
	getcwd(buf, CWD_LEN);
	
	fprintf(stdout, "%s\n", buf);
	return 0;
}
