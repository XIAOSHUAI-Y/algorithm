#include <stdio.h>

int main()
{
	int x;
	int a=0,b=0,c=0,d=0;
	scanf("%d",&x);
	if(x%2==0&&x>4&&x<=12){
		a=1; 
	}
	if(x%2==0){
		b=1;
	}
	if(x>4&&x<=12){
		b=1;
	}
	if(x%2==0&&x>=0&&x<=4||x%2!=0&&x>4&&x<=12){
		c=1;
	}
	if(x%2!=0&&x<=4||x>12){
		d=1;
	}
	printf("%d %d %d %d",a,b,c,d);
	return 0;	
}
