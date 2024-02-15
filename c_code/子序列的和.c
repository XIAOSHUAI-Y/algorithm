#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m); 
	double t,sum=0;
	int i=n;
	while(i<=m){
		t=1.0/(i*i);
		sum+=t;
		i++;
	}
	printf("%.5lf",sum);
	return 0;
}
