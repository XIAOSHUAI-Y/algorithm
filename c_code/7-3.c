#include <stdio.h>
int a[110];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i]=0;
	}
	int t;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j+1]<a[j]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=n-1;i>=2;i--){
		for(int j=i+1;j>=1;j--){
			for(int k=j+1;k>=0;k--){
				if(a[i]==a[j]+a[k]){
					a[j]++;
					a[k]++;
				}
			}
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			sum+=a[i];
		}
	}
	return 0;
}
