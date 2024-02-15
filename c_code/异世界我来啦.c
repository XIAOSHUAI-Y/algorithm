#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int s[x][y];
	int p,q;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			printf("%d",s[j][i]);
			if(j+1==x){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
