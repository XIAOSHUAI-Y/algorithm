#include <stdio.h>
#include <math.h>

int main()
{
	int n,y,t,sum=0;
	scanf("%d",&n);
    for(int i=0;n!=0;i++){
        y=n%8;
        n/=8;
    	t=y*pow(10,i);
    	sum+=t;
	}
	printf("%d",sum);
	return 0;
}
