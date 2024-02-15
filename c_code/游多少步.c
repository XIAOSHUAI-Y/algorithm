#include <stdio.h>

int main()
{
	double s;
	scanf("%lf",&s);
	int n;
	for(double i=2.0;s>=0;i*=0.98){
		if(s/i!=0){
			n++;
			s=s-i;
		}
	}
	printf("%d",n);
	return 0;
}
