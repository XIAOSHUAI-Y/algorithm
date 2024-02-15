#include <stdio.h>

int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int sum=0;
	for(int i=1;i<=n;i++){
	int t=i;
	while(t!=0){
		if(t%10==x){
			sum++;
		}
		t=t/10;
	}
}
	printf("%d",sum);
	return 0; 
}
