#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	int m=n-1,t,sum=0;
	for(int k=0;k<n-1&&m>0;k++){
		t=a[k]*m;
		sum+=t;
		m--;
	}
	printf("%d",sum);
	return 0;
}
