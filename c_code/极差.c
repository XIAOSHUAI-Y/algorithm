#include <stdio.h>

int main()
{
	int n,a[n];
	scanf("%d\n%d",&n,&a[n]);
	int max,min;
	max=1;
	min=a[0];
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
	printf("%d",max-min);
	return 0;
}
