#include <stdio.h>
#include <string.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[1100],b[1100],c[2200];
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]); 
	}
	for(int j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(int k=0;k<m+n;k++){
		if(k<m){
			c[k]=a[k];
		}
		else{
			c[k]=b[k-m];
		}
	}
	for(int i=0;i<m+n-1;i++){
		for(int j=i+1;j<m+n;j++){
			if(c[i]>c[j]){
				int t=c[j];
				c[j]=c[i];
				c[i]=t;
			}
		}
	}
	for(int i=0;i<m+n;i++){
		printf("%d",c[i]);
		if(i!=(m+n-1)){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}


