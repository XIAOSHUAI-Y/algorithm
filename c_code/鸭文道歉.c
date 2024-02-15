#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a[100001];
	char b[100001];
	scanf("%s",a);
	int l=strlen(a);
	for(int i=0;i<l;i++){
		if(n==1){
			b[i]=a[i]+i+3;
	    }
	    else{
	    	b[i]=a[i]-i-3;
		}
	}
	printf("%s",b);
	return 0;
}
