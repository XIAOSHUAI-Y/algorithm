#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int y,t,sum=0;
	if(n<7){
		sum=n;
	}
	else{
		for(int i=0;n>0;i++){
			printf("n = %d\n",n);
			y=n%7;
			n/=7;
			sum+=y*pow(10,i);
		}
    }
	printf("%lld",sum);
	return 0;
}
