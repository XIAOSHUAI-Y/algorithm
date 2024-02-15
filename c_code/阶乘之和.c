#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long int temp=1,sum=0;
    for(int i=n;i>0;i--){
	    for(int j=i;j>0;j--){
		    temp*=j;	
	    }
	    sum+=temp;
	    temp=1;}
	printf("%lld",sum);
	return 0;
}
