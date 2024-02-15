#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	double a,b;
	for(int i=0;i<n;i++){
		double m=10.5;
		scanf("%lf %lf",&a,&b);
		if(b>a){
			m=m-(b-a);
			if(m>0){
				printf("F\n");
			}
			else{
				printf("T\n");
			}
		}
		if(a==b){
			printf("ÅÑÔôµÄ¹î¼ÆµÃ³Ñ\n"); 
		}
		if(a>b){
			printf("F\n");
		}
	}
	return 0; 
 } 
