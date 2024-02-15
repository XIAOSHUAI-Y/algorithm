#include <stdio.h> 

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],ret=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[j]<a[i]){
				ret++;
			}
		}
		printf("%d ",ret);
		ret=0;
	}
	return 0;
}
