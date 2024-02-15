#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int k,i=0,sum=1;
		scanf("%d",&k);
		while(k>0){
			i++;
			if(i%2!=0){
				k++;
				sum++;
			}
			k-=2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
