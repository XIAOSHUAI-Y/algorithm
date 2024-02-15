#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int s[x+5][y+5];
	int m[y+5][x+5];
	int p,q;
	for(int i=0;i<10001;i++){
		for(int j=0;j<10001;j++){
			scanf("%d",&s[i][j]);
			m[j][i]==s[i][j];
		}
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
