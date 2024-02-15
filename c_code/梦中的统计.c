#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=m;i<=n;i++){
		for(int j=i;j>0;){
			if(j%10==0){
				a[0]++;
			}
			if(j%10==1){
				a[1]++;
			}
			if(j%10==2){
				a[2]++;
			}
			if(j%10==3){
				a[3]++;
			}
			if(j%10==4){
				a[4]++;
			}
			if(j%10==5){
				a[5]++;
			}
			if(j%10==6){
				a[6]++;
			}
			if(j%10==7){
				a[7]++;
			}
			if(j%10==8){
				a[8]++;
			}
			if(j%10==9){
				a[9]++;
		    }
		    j=j/10;
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	return 0;
}
