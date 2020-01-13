#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
	/*printf(1,"st : %d\n",getreadcount());*/
	printf(1,"%d\n" , gettickets());
	printf(1,"%d\n" , gettickets());
	printf(1,"%d\n" , gettickets());
	/*printf(1,"%d %d\n",getpid(),settickets(5));*/
	/*int rc = fork();*/
		/*if(rc)*/
			/*printf(1,"child %d: %d\n", rc,gettickets());*/
		/*else*/
			/*printf(1,"parent %d: %d\n",rc, gettickets());*/
	/*printf(1,"%d\n",rc);*/

    exit();
}

