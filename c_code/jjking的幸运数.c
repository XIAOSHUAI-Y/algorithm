#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int m;
	int t=0;
	while(n>0){
		m=n%10;
		if(m!=4&&m!=6&&m!=8){
			printf("NO");
			t=1;
			break;
		}
		else{
			n/=10;
		}
	}
	if(t==0){
		printf("YES");
	}
	return 0; 
}
