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
	int L,s=0,m=0;
	scanf("%d",&L);
	for(int j=1;s<L;j++){
		if(isPrime(j)==1){
			s+=j;
			if(s>L){
				break;
			}
			printf("%d\n",j);
			m++;
		}
	}
	printf("%d",m);
	return 0;
}
