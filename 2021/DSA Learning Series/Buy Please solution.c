#include <stdio.h>

int main(void) {
	
	int a,b,x,y;
	scanf("%d %d %d %d",&a,&b,&x,&y);
	int pen_cost= a*x;
	int pencil_cost=b*y;
	int total=pen_cost+pencil_cost;
	printf("%d",total);
	
	return 0;
	
}
