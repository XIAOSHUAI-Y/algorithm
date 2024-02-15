#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[0];
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
	int x;
	x=max-min;
	printf("%d",x);
	return 0;
}
