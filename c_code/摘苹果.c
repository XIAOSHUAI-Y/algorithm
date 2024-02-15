#include <stdio.h>

int main()
{
	int x,m,n;
	scanf("%d",&x);
	m=x*5;
	n=11+x*3;
	if(m<n){
		printf("Local");
	}
	else{
		printf("Luogu");
	}
	return 0;
}
