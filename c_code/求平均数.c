#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int min=a[0];
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int j=0;j<n;j++){
		if(a[j]<min){
			min=a[j];
		}
	}
	double z,m;
	z=sum-min-max;
	m=z/(n-2);
	printf("%.2lf",m);
	return 0;
}
