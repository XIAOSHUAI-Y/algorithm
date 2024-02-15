#include <stdio.h>
#include <string.h>
int main(){
	char t[21]={0};
    scanf("%s",t); 
	int l=strlen(t);
	int sum=1;
	int max=0;
	char end;
	char m;
	for(int i=1;i<=l;i++){
		m=t[i-1];
		if(t[i]==t[i-1]){
			sum++;
			m=t[i];
		}
		else{
			if(sum>max){
				max=sum;
				end=m;
			}
			sum=1;
		}
	}
	printf("%d %c",max,end);
	return 0;
}
