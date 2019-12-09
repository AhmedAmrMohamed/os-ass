#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
	/*printf(1,"st : %d\n",getreadcount());*/
	printf(1,"%d\n" , gettickets());
	printf(1,"%d %d\n",getpid(),settickets(5));
	printf(1,"%d\n" , gettickets());
    exit();
}

