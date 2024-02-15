#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d\n",&n,&m);
	int a[n+10];
	for(int i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	int temp=0;
	int min=0,max=0;
	
	for(int i=0;i<m;i++){
		min+=a[i];
		max+=a[i+1];
	}

	for(int i=m+1;i<n;i++){
		if(max<min){
			min=max;
		}
		max=0;
		temp=i;
		for(int b=0;b<m;b++){
		    max+=a[temp--];
	    }
	}
	printf("%d",min);
	return 0;
}
