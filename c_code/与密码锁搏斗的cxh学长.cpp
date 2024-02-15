#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=12;i<=n;i++){
		int m=i%10;
		int t=i/10;
		int f=0;
		if(i<100&&m!=t&&m!=f){
			printf("0");
			printf("%d\n",i);
		}
		if(i>100){
			int s=t%10;
			t/=10;
			if(m!=s&&m!=t&&s!=t){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
