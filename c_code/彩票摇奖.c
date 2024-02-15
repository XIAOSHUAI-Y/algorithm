#include <stdio.h>

int main()
{
	int n,a[7],ss[7]={0,0,0,0,0,0,0};
	scanf("%d",&n);
	for(int i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	int nn=n;
	int y[nn][7];
	for(int j=0;j<n;j++){
		for(int k=0;k<7;k++){
			scanf("%d",&y[j][k]);
		}
	}
	int sum=0;
	for(int j=0;j<n;j++){
		for(int k=0;k<7;k++){
		    for(int s=0;s<7;s++){
		    	if(y[j][k]==a[s]){
		    		sum++;
				}
			}
		}
		if(sum!=0){
			ss[7-sum]++;
			sum=0;
		}
	}
	for(int i=0;i<7;i++){
		printf("%d ",ss[i]);
	}
	return 0;
}
	
