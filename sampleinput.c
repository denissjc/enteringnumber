#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int a;
	printf("enter a number");
	scanf("%d",&a);
	printf("you have entered %d",a);
	return EXIT_SUCCESS;
}

output
enter a number 2
you have entered 2
