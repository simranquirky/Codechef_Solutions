
#include <stdio.h>

int main(void) {
	
	int t,e,k;
	int i; int j=0;
	scanf("%d",&t);
	int tc=t; int arr[t];
	 while(t--)
	 {
	     	scanf("%d %d",&e,&k);
	     	int count=0;
	     	i=e;
	     	while(i>0)
	     	{
	     	        count++;
	     	        i=i/k;
	     	   
	     	}
	     	arr[j]=count;
	     	j++;
	 }
	 
	for(j=0;j<tc;j++)
	printf("%d\n",arr[j]);
	return 0;
}
