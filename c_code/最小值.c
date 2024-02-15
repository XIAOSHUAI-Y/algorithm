#include <stdio.h>

int main()
{
	int n,a[100];
	int i,min;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i==0){
			min=a[0];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
