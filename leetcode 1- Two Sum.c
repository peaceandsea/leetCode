#include <stdio.h>
#include<stdlib.h>

 
int main () {
	
	int *ptr=malloc(40*sizeof(int));

	ptr[0]=123;
	printf("%d\n",ptr[0]);
	
	free(ptr);
	printf("%d",ptr[0]);
	


	return 0;
	
	
	
	
}
