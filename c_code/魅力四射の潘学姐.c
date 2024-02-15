#include <stdio.h>

int main()
{
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	int  t,x,y,x1,y1,x2,y2;
	int s[n+10][m+10];
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s[i][j]=0;
		}
	}
	for(int i=0;i<q;i++){
		scanf("%d",&t);
		if(t==1){
			scanf("%d %d",&x,&y);
			for(int k=1;k<=n;k++){
				s[k][y]++;
			}
			for(int j=1;j<=m;j++){
				s[x][j]++;
			}	
			s[x][y]-=2;
		}
		else{
			scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
			for(int p=x1;p<=x2;p++){
				for(int j=y1;j<=y2;j++){
					if(s[p][j]%2!=0){
						sum++;
					}
				}
			}
			printf("%d",sum);
			sum=0;
		}
	}
	return 0;
}
