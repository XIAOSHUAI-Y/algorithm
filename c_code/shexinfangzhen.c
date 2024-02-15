#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[15][15]={0};
	int x=1,y=1;
	int m=n-1;
	for(int i=1;i<=n*n;i++){
		arr[x][y]=i;
		while(i<=n){
			y++;
		}
		while(m>0&&i>n){
			while(n>0){
				y++;n--;
			}
			m--;
			n=m;
			while(n>0){
				x++;n--;
			}
			m--;
			n=m;
			while(n>0){
				y--;n--;
			}
			m--;
			n=m;
			while(n>0){
				x--;
				n--;
			}
			m--;
			n=m;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
	}
	return 0;
}
