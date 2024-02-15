#include <stdio.h>

int main()
{
	int n,m;
	int a[10010]={0},b[10010]={0};
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int j=0;j<m;j++){
		int t=0;
		for(int i=0;i<n;i++){
			if(a[i]<a[t]){
				t=i;
			}
		}
		if(b[j]>a[t]){
			a[t]=b[j];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
