#include <stdio.h>
#include <math.h>

int main(void) {
	
	int s1,s2,s3;
	scanf("%d %d %d",&s1,&s2,&s3);
        
        if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s1+s3)>s2))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
	return 0;
}
