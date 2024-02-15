#include <stdio.h>
char s[100010];
int main()
{
	gets(s);
	int sum=0;
	for(int i=0;i<100010;i++){
		if(s[i]==' '){
			sum++;
		}
	}
	printf("%d",sum+1);
	return 0;
}
