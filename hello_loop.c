#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 0;
	for(;;i++)
	{
		printf("Petla nr: %d\n",i);
		sleep(1);
	}
	
	return 0;
}
