#include <stdio.h>

int main()
{
	int n;
	char s[60];
	scanf("%d\n%s",&n,s);
	int i=0;
	while(s[i]){
		s[i]='a'+(s[i]-'a'+n)%26;
		i++;
	}
	printf("%s",s);
	return 0;
}
 
