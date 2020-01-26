#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
//	int rc = fork();

//	if(rc<0)
//		printf(1,"noooo");
//	else if(rc ==0)
//		printf(1,"child  :%d\n",5);
//	else
//	{
//		wait();
//		printf(1,"parent :%d\n",5);
//	}

	printf(1,"%d\n",gettickets());
	settickets(5);
	printf(1,"%d\n",gettickets());
	exit();
}

