#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1||n==2||n==3){
		printf("暖气"); 
	}
	else if(n==4||n==5||n==6){
		printf("热气"); 
	}
	else if(n==7||n==8||n==9){
		printf("冷气"); 
	}
	else if(n==10||n==11||n==12){
		printf("没气"); 
	}
	return 0;
}
