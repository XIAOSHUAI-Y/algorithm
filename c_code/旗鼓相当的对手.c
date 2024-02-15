#include <stdio.h>
#include <math.h>

int main()
{
	int N,sum=0;
	scanf("%d",&N);
	int a[N],b[N],c[N],d[N];
	for(int i=0;i<N;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		d[i]=a[i]+b[i]+c[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<i;j++){
			if(abs(a[j]-a[i])<=5&&abs(b[j]-b[i])<=5&&abs(c[j]-c[i])<=5&&abs(d[j]-d[i])<=10){
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
