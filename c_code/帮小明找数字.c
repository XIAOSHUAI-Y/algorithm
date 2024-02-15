#include <stdio.h>

int main()
{
	int m;
	scanf("%d",&m);
	int a[20010]={0};
	for(int i=1;i<=m;i++){
		a[i]=0;
	}
	for(int i=2;i<=m;i++){
		for(int j=2;j<=m/2;j++){
			if(i!=2&&i%j==0){
				a[i]++;
				break;
			}
		}
	}
	int sum=0;
	for(int i=m;i>0;i--){
		if(a[i]==0){
			printf("%d ",i);
			sum++;
		}
		if(sum==10){
			break;
		}
	}
	return 0;
}
