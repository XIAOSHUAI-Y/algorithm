#include <stdio.h>

int main(void)
{
	int i,n;
	int j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(a[i]==a[j]){
				for(temp=j;temp<n;temp++){
					a[temp]=a[temp+1];
					n--;
				}
			}	
			else{
				j++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
