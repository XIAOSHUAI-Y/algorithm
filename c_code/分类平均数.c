#include <stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i;
	double s,t,m,x;
	m=0;
	x=0;
	for(i=1;i<=n;i++)
	{
		if(i%k==0)
		{
			s+=i;
			m++;
		}
		else
		{
			t+=i;
			x++;
		}
	}
	double ss,tt;
	ss=s/m;
	tt=t/x;
	printf("%.1lf %.1lf",ss,tt);
	return 0;
}
