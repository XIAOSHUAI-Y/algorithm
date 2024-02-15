#include <stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	double a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%lf %lf",&a[i],&b[i]);
		if(b[i]-a[i]>=10.5){
			printf("T");
		}
		else if(b[i]-a[i]<11&&b[i]-a[i]!=0){
			printf("F");
		}
		else if(b[i]==a[i]){
			printf("ÅÑÔôµÄ¹î¼ÆµÃ³Ñ");
		}
		printf("\n");
	}
	return 0; 
 } 
