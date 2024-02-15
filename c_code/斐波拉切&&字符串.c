#include <stdio.h>
#include <string.h>

void gen(char result[],int n)
{
	if(n==0){
		strcpy(result,"SWPUNB");
	}
	else if(n==1){
		strcpy(result,"LECSOFTWARELEAGUE!!!");
	}
	else{
		char pre2[10010];
		gen(pre2,n-2);
		char pre1[10010];
		gen(pre1,n-1);
		strcpy(result,strcat(pre2,pre1));
	}
}
int main()
{
	int n,c;
	scanf("%d %d",&n,&c);
	char a[10010];
	gen(a,n);
	printf("%c",a[c-1]);
	return 0;
}
