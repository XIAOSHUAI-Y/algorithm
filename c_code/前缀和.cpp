#include <stdio.h>

int s[100010];
int main()
{
	int n;
	scanf("%d",&n);
	int l,r,x;
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&l,&r,&x);
		s[l]+=x;s[r+1]-=x;
	}
	int sum[100010];
	int max=-1;
	for(int i=1;i<100010;i++){
		sum[i]=sum[i-1]+s[i];
		if(sum[i]>max){
			max=sum[i];
		}
	}
	printf("%d",max);
	return 0;
}
