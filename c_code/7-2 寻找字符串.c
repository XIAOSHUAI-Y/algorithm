#include <stdio.h>
#include <string.h>
char a[88];
char b[88];
int main()
{
    gets(a);
	int l=strlen(a);
	int m=-1,n=-1;
	for(int i=0;i<l && (m==-1||n==-1);i++){
		if(a[i]=='Y'){
			m=i;
		}
		if(a[i]=='L'){
			n=i;
		}
	}
	if(m!=-1&&n!=-1){
		for(int k=m+1;k<n;k++){
			printf("%c",a[k]);
		}
	}
	else{
		printf("No Information");
	}
	return 0;
}

