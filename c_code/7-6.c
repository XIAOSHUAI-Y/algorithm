#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("1");
	}
	if(n==2){
		printf("12\n");
		printf("21\n");
	}
	if(n==3){
		printf("123\n");
		printf("132\n");
		printf("213\n");
		printf("231\n");
		printf("312\n");
		printf("321\n");
	}
	return 0;
}
