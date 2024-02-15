#include <stdio.h>

int main()
{
	int k,sum=0;
	scanf("%d",&k);
	for(int i=1;k>0;i++){
		if(k>=i){
			sum+=i*i;
		}
		else{
			sum+=k*i;
		}
		k-=i;
	}
	printf("%d",sum);
	return 0;
}
