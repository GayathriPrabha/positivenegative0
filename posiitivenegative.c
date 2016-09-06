#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n==0)
	{
	    printf("zero");
	}
	else if(n<0)
	{
	    printf("negative");
	}
	else
	{
	    printf("positive");
	}
	return 0;
}

