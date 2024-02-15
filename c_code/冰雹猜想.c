#include <stdio.h>

int main()
{
	int n,i=0;
	scanf("%d",&n);
	int a[10002];
	for(;n!=1;i++ ){
		a[i]=n;
		if(n%2!=0){
			n=n*3+1;
		}
		else{
			n=n/2;
		}
	}
	a[i]=1;
	for(int j=i;j>=0;j--){
		printf("%d ",a[j]);
	}
	return 0;
}
