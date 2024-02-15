#include <stdio.h>
#include <string.h>

int str(char a[10001],char b[10001])
{
	int i=0,j,k;
	j=strlen(a);
	k=j-1;
	while(i<j){
		b[k]=a[i];
		i++;
		k--;
	}
	return 0;
}
int main()
{
	char c[10001];
	char d[10001];
	scanf("%s",c);
	str(c,d);
	printf("%s",d);
	return 0;
}
