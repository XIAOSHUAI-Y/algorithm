#include <stdio.h>

long long a[600][100010];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<100010;j++){
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		int l,r,x;
		scanf("%d %d %d",&l,&r,&x);
		for(int j=l;j<=r;j++){
			a[i][j]=x;
		}
	}
	int max=0;
	for(int j=0;j<100010;j++){
		int b=0;
		for(int i=0;i<n;i++){
			b+=a[i][j];
			if(b>max){
			    max=b;
			}
		}
	}
	printf("%d",max);
	return 0;
}
