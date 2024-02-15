#include <stdio.h>
#include <string.h>
char s[1110];
int main()
{
	scanf("%s",s);
	int cnt=0;
	memset(s,0,sizeof s);
	int l=strlen(s);
	for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l;j++){
			if(s[j]==s[i]){
				s[i]++;
				s[j]++;
			}
		}
	}
	for(int i=0;i<l;i++){
		if(s[i]==0){
			printf("%c",s[i]);
		}
	}
	return 0;
}
