#include <stdio.h>
#include <string.h>

int ans=0;
char a[10001];
int main()
{
	gets(a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
	{
		if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='t'||
		a[i]=='m'||a[i]=='p'||a[i]=='w')ans++;
		
		if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='u'||
		a[i]=='n'||a[i]=='q'||a[i]=='x')ans+=2;
		
		if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='v'||
		a[i]=='o'||a[i]=='r'||a[i]=='y')ans+=3;
		
		if(a[i]=='s'||a[i]=='z')ans+=4;
		
		if(a[i]==' ')ans++;
	}
	printf("%d",ans);
	return 0;
}
