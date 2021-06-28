#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	//t is the bus number
	if((t%5==0)||(t%6==0))
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}
