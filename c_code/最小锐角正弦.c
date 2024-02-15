#include <stdio.h>

int main()
{
	int a,b,c,m,n;
	scanf("%d %d %d",&a,&b,&c);
	if(c>b&&b>a){
		m=a,n=c;
	}
	if(c>a&&a>b){
		m=b,n=c;
	}
	if(b>c&&c>a){
		m=a,n=b;
	}
	if(b>a&&a>c){
		m=c,n=b;
	}
	if(a>b&&b>c){
		m=c,n=a;
	}
	if(a>c&&c>b){
		m=b,n=a;
	}
	int min;
	if(m>n){
		min=n;
	}
	else{
		min=m;
	}
	int ret=0;
	int i;
	for(i=1;i<min;i++){
		if(m%i==0){
			if(n%i==0){
				ret=i;
			}
		}
	}
	int mm,nn;
	mm=m/ret;
	nn=n/ret;
	printf("%d/%d",mm,nn);
	return 0;
}
