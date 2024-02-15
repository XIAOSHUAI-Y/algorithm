
#include <stdio.h>

int main()
{
	int a,m=0;
	scanf("%d",&a);
	for(m=0;a>=1;m++) 
	{
		a=a/2;
		if(a%2!=0){
			a-1;
		}
	}
	printf("%d",m);
	return 0;
}
