#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int a[n+5][n+5],max=0,x=0,y=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>max){
				max=a[i][j];
				x=i;
				y=j;
			}
		}
	}
	printf("%d %d %d ",max,x+1,y+1);
	return 0;
}
