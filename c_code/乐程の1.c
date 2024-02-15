#include <stdio.h>
#include <string.h>
char a[100010];
int main()
{
	scanf("%s",a);
	int l=strlen(a);
	int m=0;
	long long sum=0,t=0,s=0,f=0;
	for(int i=0;i<l; ){
		int y=i;
		if(a[i]=='1'){
			t++;
			y++;
		}
		s=t*(t+1)/2;
		f+=s;
		if(t){
			i=y;
		}
		else{
			i++;
		}
	}
	printf("%lld",s);
	return 0;
}
