#include <stdio.h>

int main(void) {
	
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(int i=1;i<=n;i++)
	{
	    scanf("%d ",&a[i]);
	    
	}
	
		for(int i=n;i>=1;i--)
	{
	    printf("%d ",a[i]);
	    
	}
	return 0;
}
