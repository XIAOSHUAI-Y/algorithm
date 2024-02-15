#include <stdio.h>
#include <string.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	char arr[100001];
	scanf("%s",arr);
	int l=strlen(arr);
	int c,d;
	for(int i=0;i<l;i++){
		c=arr[i+1]-arr[i];
		if(c>x||c<(-x)) {
			break;
			printf("NO");
		}
	}
	int max,f;
	f==arr[0]-arr[1];
	if(f<0){
		f=(-f);
	}
	max=f;
	for(int j=0;j<l;j++){
		for(int k=0;k<j;k++){
			if(arr[j]-arr[k]<0){
				arr[j]-arr[k]==arr[k]-arr[j];
			}
			if(arr[j]-arr[k]>max){
				max=arr[j]-arr[k];
			}
			if(arr[j]-arr[k]>y){
				break;
				printf("NO");
			}
			else{
				double t;
				t=max/y;
				printf("YES");
				printf("%.2lf",t);
			}
		}
	}
	return 0;
}
