#include <stdio.h>
#include <string.h>
char a[110];
char b[110]; 
int main()
{
	gets(a);
	gets(b);
	char c={','};
	printf("%s%c%s",a,c,b);
	return 0;
}
