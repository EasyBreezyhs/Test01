#include "speak.h"

void sayHello(const char *str){
	static int count = 0;
	count++;
	printf("Hello %s.\n",str?str:"NULL");
	printf("count: %d.\n",count);
	return(void)(0);
}
