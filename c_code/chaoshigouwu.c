#include <stdio.h>

int main()
{
	int price = 0,change;
	printf("�����뻨�ѽ��:");
	scanf("%d",&price);
	change = 100 - price;
	printf("100 - %d = %d\n",price,change);
	
	return 0;
}
