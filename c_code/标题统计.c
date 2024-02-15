#include <stdio.h>
#include <string.h>

int main()
{
	char s[10];
    gets(s);
	int len;
	len=strlen(s);
	int ret=0;
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'){
			ret++;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			ret++;
		}
		if(s[i]>='0'&&s[i]<='9'){
			ret++;
		}
	}
	printf("%d",ret);
	return 0;
}
