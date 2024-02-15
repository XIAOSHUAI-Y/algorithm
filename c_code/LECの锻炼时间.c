#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	long long i=1;
	while((a*i)%b!=0){
		i++;
	}
	long long j=1;
	while((a*i*j)%c!=0){
		j++;
	}
	printf("%lld",a*i*j);
	return 0;
}
