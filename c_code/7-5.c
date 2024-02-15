#include <stdio.h>
char a[110];
int main()
{
	int n;
	scanf("%d\n%s",&n,a);
	int sum=1,f,g=0;
	for(int i=0;i<n-1;i++){
		if(a[i]=='x'&&a[i]==a[i+1]){
			sum++;
		}
	    else{
	    	sum=1;
		}
		if(sum)
		
	}
	if(g!=0){
		printf("%d",g);
	}
	else{
		printf("0");
	}
	return 0;
}
