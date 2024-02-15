#include <stdio.h>

int main()
{
	int l,m,sum=0,u,v,i;
	scanf("%d %d",&l,&m);
	int a[l+1];
	for(i=0;i<l+1;i++){
		a[i]=0;
	}
	for(i=0;i<m;i++){
		scanf("%d %d",&u,&v);
		for(int j=u;j<=v;j++){
			a[j]=1;
		}
	}
	for(int e=0;e<(l+1);e++){
		if(a[e]==0){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
