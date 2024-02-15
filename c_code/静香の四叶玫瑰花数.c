#include <stdio.h>

int main()
{
	int n,m,t,s,f,j,h,k;
	scanf("%d",&n);
	for(int i=1000;i<=n;i++){
		m=i%10;
		h=i/10; 
		t=h%10;
		k=h/10;
		s=k%10;
		f=k/10;
		j=m*m*m*m+t*t*t*t+s*s*s*s+f*f*f*f;
		if(j==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
