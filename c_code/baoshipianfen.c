#include <stdio.h>

int main()
{
	int N,M,T;
	int sum=0;
	scanf("%d %d",&N,&M);
	int a[10010],b[10010];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<M;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(a[i]>a[j]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(int i=0;i<M-1;i++){
		for(int j=i+1;j<M;j++){
			if(b[i]>b[j]){
				int t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	if()
	for(int i=0;i<N;i++){
		if(b[i]>=a[i]){
			sum+=1;
		}
	}
	printf("%d",sum);
	return 0;
}
