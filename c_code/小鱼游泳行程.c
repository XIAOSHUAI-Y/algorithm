#include <stdio.h>

int main()
{
	int x,n,i,d=0,s=0,l;

	scanf("%d %d",&x,&n);
		i=x;
	while(++d<=n){
		if(i==8){
			i=1;
		}
		if(i==6||i==7){
			i++;
		}
		if(i!=6&&i!=7&&i!=8){
			s++;i++;
		}
	}
	l=s*250;
	printf("%d",l);
	return 0;
}
