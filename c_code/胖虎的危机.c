#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int t=1,sum=0,s=1;
	while(s<m){
		t=s*n;
		s+=t;
		sum++;
	}
	printf("%d",sum);
	return 0;
 } 
