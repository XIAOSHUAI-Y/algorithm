#include <stdio.h>
#include <string.h>
int main()
{
	char a[110]={0};
	char b[110]={0};
	char m;
	int n;
	scanf("%s%c%d",a,m,&n);
	for(int i=0;i<n;i++){
		strcat(b,a);
	}
	printf("%s",b);
	return 0;
}
