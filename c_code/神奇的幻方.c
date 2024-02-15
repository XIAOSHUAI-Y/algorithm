#include <stdio.h>

int N,a[45][45],j=1,k,cnt=2;
int main()
{
	scanf("%d",&N);
	a[1][(N+1)/2]=1;
	k=(N+1)/2;
	for(int i=2;i<=N*N;++i){
		if(j==1&&k!=N){
			a[N][k+1]=cnt;
			j=N;
			k+=1;
			cnt++; 
		}
		else if(j!=1&&k==N){
			a[j-1][1]=cnt;
		    k=1;
			j-=1;
			cnt++;
		}
		else if(j==1&&k==N){
			a[j+1][k]=cnt;
			j+=1;
			cnt++;
		}
		else {
		    if(a[j-1][k+1]==0){
		    	a[j-1][k+1]=cnt;
		    	j-=1;
				k+=1;
				cnt++;
			}
			else{
				a[j+1][k]=cnt;
				j+=1;
				cnt++;
			}
		}
	}
	for(int x=1;x<=N;++x){
		for(int y=1;y<=N;++y){
			printf("%d ",a[x][y]);
		}
		printf("\n");
	}
	return 0;
}
