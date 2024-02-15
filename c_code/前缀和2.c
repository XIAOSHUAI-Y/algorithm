#include <stdio.h>

int main()
{
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	int s[1010][1010];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",s[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
		}
	}
	int x1,y1,x2,y2;
	while(q--){
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		printf("%d",s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]);
	}
	return 0;
}
