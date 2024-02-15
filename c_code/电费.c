#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	double m;
	if(x>=0&&x<=150){
		printf("%.1lf",0.4463*x);
		return 0;
	}
	if(x>=151&&x<=400){
		printf("%.1lf",150*0.4463+(x-150)*0.4663);
		return 0;
	}
	if(x>=401&&x<=10000){
		printf("%.1lf",150*0.4463+250*0.4663+(x-400)*0.5663);
	}
	return 0;
}
