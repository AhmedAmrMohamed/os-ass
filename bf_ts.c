#include "types.h"
#include "stat.h"
#include "user.h"
int main(void)
{ 
	settickets(4);
	int rc = fork();
	if(rc<0){
		printf(1,"noo!\n");
	}else if(!rc){
		printf(1,"child  : %d\n",gettickets());
	}else{
		wait();
		printf(1,"parent : %d\n",gettickets());
		exit();
	}
	exit();
}

