#include <stdio.h>
#include <string.h>

int main()
{
	int q;
	char s[1100];
	scanf("%d\n%s",&q,s);
	int m;
	int a,b;
	char t[110];
	char x[110];
	for(int i=0;i<q;i++){
		scanf("%d",m);
		if(m==1){
			scanf("%s",t);
			strcat(s,t);
			printf("%s\n",s);
		}
		else if(m==2){
			scanf("%d %d",&a,&b);
			for(int j=a;j<=b;j++){
				printf("%d",s[j]);
			}
			printf("\n");
		}
		else if(m==3){
			scanf("%d %s",&a,x);
			strcat(x,&s[a]);
			s[a]='\0';
			strcat(s,x);
			printf("%s\n";s);
		}
		else if(m==4){
			
		}
	}
}
