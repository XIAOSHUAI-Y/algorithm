#include <stdio.h>
int main()
{
	int a[100],n=0;
	for(int i=0; ;i++){
		scanf("%d",&a[i]);
		if(a[i]!=0){
			n++;
		}
		else{
			break;
		}
	}
	for(int j=n-1;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
