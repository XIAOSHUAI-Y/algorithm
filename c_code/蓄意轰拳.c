#include <stdio.h>

int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n],t;
	int b[100001]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		for(int j=t;j<t+x;j++){
			b[j]=1;
		}
	}
	int sum=0;
	for(int i=0;i<100001;i++){
		if(b[i]==1){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
} 
