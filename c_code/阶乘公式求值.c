#include <stdio.h>

double fact(int k)
{
	double s=1;
	for(int i=1;i<=k;i++){
			s*=i;
     }
	    return s;
}

int main()
{
	int n;
	scanf("%d",&n);
	double sum=0;
	for(int i=1;i<=n;i++){
		sum+=1.0/fact(i); 
	}
	printf("sum=%.5lf",sum);
	return 0;
}
