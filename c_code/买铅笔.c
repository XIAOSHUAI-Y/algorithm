#include <stdio.h>

int main()
{
	int n,a[3],b[3],x[3],y[3];
	int i,min,t;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		x[i]=n/a[i];
	    if(n%a[i]!=0)
	    {
	       x[i]++;}
	}
	y[0]=b[0]*x[0];
	min=y[0];
	for(i=0;i<3;i++)
	{
		y[i]=b[i]*x[i];
		if(y[i]<min)
		{
			min=y[i];
		}
	}
	printf("%d",min);
	return 0;
}
