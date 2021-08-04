
#include <stdio.h>

int main(void) {
	
	int t,a,b;
	scanf("%d",&t); int tc=t;
  //t= number of test cases
	int arr[t];
	int i=0;
	while(t--)
	{
	    scanf("%d %d",&a,&b);
    
	    int sum=a+b;
	    if(sum<3)
	    {
	        arr[i]=1;
	    }
	    else if((sum>=3)&&(sum<=10))
	    {
	        arr[i]=2;
	    }
	     else if((sum>=11)&&(sum<=60))
	    {
	        arr[i]=3;
	    }
	    else
	    {
	        arr[i]=4;
	    }
	    i++;
	}
	     	
	    for(i=0;i<tc;i++)
	    {
	        printf("%d\n",arr[i]);
	    }
	     	
	 
	 
	
	return 0;
}
