#include <stdio.h>

int main()
{
	int a[7],b[7],c[7];
	int max,t=0,i ;
	for(i=0;i<7;i++){
		scanf("%d %d",&a[i],&b[i]);
		c[i]=a[i]+b[i];
	}
	for(i=0;i<7;i++){
		if(c[i]>max){
			max=c[i];
			t=i;
		}
	}
	if(max<=8){
		printf("0");
	}
	else{
		printf("%d",t+1);
    }
    return 0;
}
