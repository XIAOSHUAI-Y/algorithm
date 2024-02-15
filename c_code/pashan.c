#include <stdio.h>
int yjy(int x)
{
	if(x==1){
		return 1;
	}
	else if(x==2){
		return 2;
	}
	else{
		return (yjy(x-2)+yjy(x-1)+1000000007)%1000000007;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",yjy(n));
	return 0;
}
