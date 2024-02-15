#include <stdio.h>
#include <string.h>
char s[110];
int main()
{
	scanf("%s",s);
	int l=strlen(s);
	for(int i=0;i<l;i++){
		if(i==l-1){
		    s[i+1]=s[0];
		}
		printf("%c",'s[i]'+'s[i+1]');
	}
	return 0;
}
