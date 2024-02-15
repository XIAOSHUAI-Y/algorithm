#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=0;k<n;k++){
				if(a[i]+a[j]==a[k]&&b[k]==0){
					sum++;
					b[k]=1;
				}
			}
		}
	}
	printf("%d",sum);
	return 0;
}

