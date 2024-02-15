#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,carry=0,i,j;
	int	sum[101],a[101];
	memset(sum,0,sizeof(sum));
	memset(a,0,sizeof(a));
	sum[0]=1;
	a[0]=1;
	
	cin>>n;
	
	if(n==1) 
		cout<<"1";
	
	for(i=2;i<=n;i++)
	{
		for(j=0;j<100;j++)
		{
			a[j]*=i;
		}
		
		for(j=0;j<100;j++)
		{
			a[j]=carry+a[j];
			carry=a[j]/10;
			a[j] %= 10;	
		}
		
		for(j=0;j<100;j++)
		{
			sum[j] += a[j];
			if(sum[j] > 9) 
			{
				sum[j+1] +=	sum[j]/10;
				sum[j] %= 10;
			}
				
		}
		
	}
	for(i=99;i>0 && sum[i]==0;i--); 
	for(j=i;j>=0;j--)  cout<<sum[j];
	return 0;	
}
