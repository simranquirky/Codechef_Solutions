#include <stdio.h>

int main(void) {
	
int start , end;
scanf("%d %d",&start,&end);
int a[end];
int x=0;
for(int i=start;i<=end;i++)
{
   
    if(i%2!=0)
    {
        a[x]=i;
        x++;
    }
}

for (int y=0;y<x;y++)
{
    printf("%d ",a[y]);
}
	
	return 0;
}

