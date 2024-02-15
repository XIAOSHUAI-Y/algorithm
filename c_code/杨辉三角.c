#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		a[i][0]=1;
		a[i][i]=1;
    }
    for(int j=2;j<n;j++){
    	for(int k=1;k<j;k++){
    		a[j][k]=a[j-1][k-1]+a[j-1][k];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
