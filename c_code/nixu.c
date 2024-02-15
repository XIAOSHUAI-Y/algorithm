#include <string.h>
#include <stdio.h>

void f(char *p);
int main()
{
    char str[80];
    gets(str);
    f(str);
    puts(str);
}

void f(char *p)
{
	int l=strlen(p),i=0;
	char a;
	for(i;i<l/2;i++){
		a=p[i];
		p[i]=p[l-i-1];
		p[l-i-1]=a;
		
	}
	
}
