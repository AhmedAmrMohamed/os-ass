#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
	/*printf(1,"st : %d\n",getreadcount());*/
	printf(1,"%d %d\n",getpid(),settickets(5));
    exit();
}

