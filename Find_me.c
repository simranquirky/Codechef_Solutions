#include <stdio.h>

int main(void) {
	
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	int c=0;
	for(int i=1; i<=n; i++)
	{
	    scanf("%d ",&a[i]);
	    if(a[i]==k)
	    {
	        c=1;
	    }
	}
	
	if(c==1)
	{
	    printf("1");
	}
	else
	{
	    printf("-1");
	}
	return 0;
}
