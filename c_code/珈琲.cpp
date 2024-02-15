#include <stdio.h>

int main()
{
	long long n;
	int t;
	scanf("%lld %d",&n,&t);
	long long a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int f=a[j];
				a[j]=a[i];
				a[i]=f;
			}
		}
	}
	long long m=0,s=0,sum=0;
	for(int i=0;i<n;i++){
		s+=m;
		while(s<0&&t>0){
			s=0;
			t--;
		}
		m=a[i];
		sum+=s;
	}
	printf("%lld\n",sum);
	return 0;
}
