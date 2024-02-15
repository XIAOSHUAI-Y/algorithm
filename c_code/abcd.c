#include <stdio.h>
#include <string.h>
char a[1010];
int main()
{
	int n;
	scanf("%d",&n);
	scanf("%s",a);
	int l=strlen(a);
	int sum=0,max=0;
	for(int i=0;i<l;i++){
		for(int j=i+1;j<l;j++){
			if(a[j]==a[i]){
				sum=j-1-i;
			}
		}
		if(sum>max){
			max=sum;
		}
		sum=0;
	}
	printf("%d",max);
	return 0;
}
