#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	long long n=a*b;
	int m=0;
	while(m=a%b){
		a=b;
		b=m;
	}
	long long p=n/b;
	long long q=p*c;
	int i=0;
	while(i=p%c){
		p=c;
		c=i;
	}
    printf("%lld",q/c);
	return 0;
}

