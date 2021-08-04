#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);

        for(int i=1;i<=t;i++)
        {
            for(int j=t;j>i;j--)
            printf(" ");
            for(int k=1;k<=i;k++)
            printf("*");
            printf("\n");
        }
        
	
	return 0;
}
