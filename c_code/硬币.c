#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int m=0,sum=0,i=1;
	while(n>0){
		sum+=n;
		m+=i;
		n-=m;
	}
	printf("%d",sum);
	return 0;
}
