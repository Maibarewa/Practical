#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t mypp_id;

	mypp_id = getppid();
	printf("This is a parent process ID:%u\n", mypp_id);
	return (0);
}

