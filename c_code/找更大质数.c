#include <stdio.h>

int isPrime(int x)
{
	int i,ret=1;
	if(x==1||(x%2==0&&x>2)){
		ret=0;
	}
	for(i=3;i<x;i+=2){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{
	int n;
	scanf("%d",&n);
	int p,f;
	for(int i=2;i<n;i++){
		p=i;
		if(isPrime(i)==1&&n%i==0){
			f=n/i;
	    }
		if(f>i){
			p=f;
			break;
		}
	}
	printf("%d",p);
	return 0;
}
