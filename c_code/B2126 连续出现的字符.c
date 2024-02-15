#include <stdio.h>
#include <string.h>
char s[10010];
int main()
{
	int k;
	scanf("%d\n%s",&k,s);
	int l=strlen(s);
	char m;
	int sum=1;
	for(int i=1;i<l;i++){
		if(s[i]==s[i-1]){
			sum++;
			if(sum>=k){
				printf("%c",s[i]);
				return 0;
			}
		}
		else{
			sum=1;
		}
	}
	printf("No");
	return 0;
}
