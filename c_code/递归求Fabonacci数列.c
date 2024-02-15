#include <stdio.h>

int f(int n)
{
	long y;
	if(n==0){
		y=0;
	}
	else if(n==1){
		y=1;
	}
	else{
		y=f(n-2)+f(n-1);
	}
	return y;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    printf("%d\n", f(n));
    
    return 0;
}

