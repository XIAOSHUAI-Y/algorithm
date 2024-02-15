#include <stdio.h>

int main()
{
	int price = 0,change;
	printf("请输入花费金额:");
	scanf("%d",&price);
	change = 100 - price;
	printf("100 - %d = %d\n",price,change);
	
	return 0;
}
