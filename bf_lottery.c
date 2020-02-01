#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
	settickets(10);
	int rc = fork();
	if(rc < 0) exit();
	if(rc == 0)
		printf(1,"child : %d\n",gettickets());
	else
	{
		wait();
		printf(1,"parent : %d\n",gettickets());
	}
	rc = fork();
	rc = fork();
	rc = fork();
	printf(1,"-----------------ps-------------\n");
	if(rc > 0)
	{
		wait();
		getpinfo();
	}

	exit();
}

