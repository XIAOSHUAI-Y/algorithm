#include <stdio.h>

int function(int N)
{
	int t = 0,sum=0;

	for(int i=1;i<=N;i++){ 
		if(i%7==0){
			sum++;
		}
		else{
			int x = i;
			// 300 7 17 117
			// 分解整数
			while(x!=0){
				t=x%10;
				if(t==7){
					sum++;
					break;
				}
				x/=10;
			}
		}
	}
	return sum;
}
int main()
{
    int N;
    scanf("%d",&N);
    int a = function(N);
    printf("%d",a);
    return 0;
}
