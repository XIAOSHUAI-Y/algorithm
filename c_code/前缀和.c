#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],s[100010];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i];
	}
	int l,r;
	for(int i=1;i<=m;i++){
		scanf("%d %d",&l,&r);
		printf("%d\n",s[r]-s[l-1]);
	}
	return 0;
 } 
