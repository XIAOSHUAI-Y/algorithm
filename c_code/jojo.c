#include <stdio.h>
#include <string.h>
char s[100010];
char t[100010];
int main()
{
	fgets(s,100010,stdin);
	fgets(t,100010,stdin);
	int l1=strlen(s)-1;
	int l2=strlen(t)-1;
	int n=0,sum=0;
	int y[100010];
	int temp=0;
	for(int i=0;i<=l2-l1;i++){
		int m=i;
		for(int j=0;j<l1 && m + j < l2 ;j++){
			if(t[m+j]==s[j]){
				n++;
			}
		}
		if(n==l1){
			sum++;
			y[temp++]=m;
		}
		n=0;
	}
	printf("%d\n",sum);
	for(int i=0;i<sum;i++){
		printf("%d ",y[i]);
	}
	return 0;
 } 
