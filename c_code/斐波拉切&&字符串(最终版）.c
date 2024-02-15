#include <stdio.h>
#include <string.h>

char result;
char a[]={"SWPUNB"},b[]= {"LECSOFTWARELEAGUE!!!"};
long long length[90];
long long m;
void len(long long cnt){
	if(cnt==0){
		result=a[m-1];
		return;
	}
	if(cnt==1){
		result=b[m-1];
		return;
	}
	if(m<=length[cnt-2]){
		len(cnt-2);
	}
	else{
		m-=length[cnt-2];
		len(cnt-1);
	}
}
int main()
{
	length[0]=6;length[1]=20;
	for(int i=2;i<=80;i++){
		length[i]+=length[i-1]+length[i-2];
	}
	long long n;
	long long c;
	scanf("%lld %lld",&n,&c);
	m=c;
	len(n);
	printf("%c",result);
	return 0;
}
