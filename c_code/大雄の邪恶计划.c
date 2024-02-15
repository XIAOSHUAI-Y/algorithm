#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		a[i]=1; 
	}
	for(int i=2;i<=n;i++){
		for(int j=i-1;j<n;j+=i){
			a[j]=!a[j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
