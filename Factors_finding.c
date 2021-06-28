#include <stdio.h>

int main(void) {
	
	int n;
	scanf("%d",&n);
	int c=0;
	int a[n];
	
	for(int i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        a[c]=i;
	        c++;
	    }
	}
	printf("%d \n",c);
		for(int i=0;i<c;i++)
		{
		    printf("%d ",a[i]);
		}
	
	return 0;
}
