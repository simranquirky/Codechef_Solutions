#include <stdio.h>

int main(void) {
	
	int t,n,d,h;
	
	scanf("%d",&t);

	 while(t--)
	 {
	     	scanf("%d %d %d",&n,&d,&h);
	     	int sum=0;int val; int ret=0;
	     	for(int i=0;i<n;i++)
	     	{
	     	    scanf("%d",&val);
	     	    if(val>0)
	     	    {
	     	        sum+=val;
	     	       
	     	    }
	     	    if(val==0)
	     	    {
	     	        sum=(sum<d)?0 : (sum-d);
	     	       
	     	    }
	     	     if(sum>h)
	     	        {
	     	            ret=1;
	     	        }
	     	}
	     	if(ret==0)
	     	printf("NO\n");
	     	else
	     	printf("YES\n");
	     	
	     	
	 }
	 
	
	return 0;
}
