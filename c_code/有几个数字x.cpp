#include <stdio.h>

int main()
{
	int n,x,b,c,t;
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++){
		b=i;
		while(b!=0){
			c=b%10;
			b=b/10;
			if(c==x){
				t++;
			}
		}
	}
	printf("%d",t);
	return 0;
}
