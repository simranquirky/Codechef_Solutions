
#include<stdio.h>

int main(void) {
	
	int t,x,y;
	//t takes the number of test cases as input
	scanf("%d",&t);
	int tc=t;
	float a[t]; int i=0;
	while(t--)
	{
	    	scanf("%d %d",&x,&y);
	    	// x and y are the respective outcomes on the dice of first and second player
	    	float sum=x+y;
	    	float probability= (6.0-sum)/6.0;
    //probability= (total-outcome)/total 
	    	a[i]=probability;
	    	i++;
	    	
	}
	for(int j=0;j<tc;j++)
	{
	    if(a[j]>0)
	    printf("%.6f \n",((signed long)(a[j] * 1000000) * 0.000001f));
    //the above statement prints the output upto 6 decimal places without rounding off the last place.(this is required for successful submission of code)
	    else
	    printf("0 \n");
	}
	
	return 0;
}
