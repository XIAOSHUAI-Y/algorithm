#include <stdio.h>

int main()
{
	int s,v;
	scanf("%d %d",&s,&v);
	s>=0;
	v>=0;
	int t;
	t=s/v+10;
	if(s%v!=0){
		t++;
	}
	int arrivet=8*60+24*60;
	int got;
	got=arrivet-t;
	if(t<8*60){
		got-=24*60;
	}
	int h=got/60;
	int m=got%60;
	int h1,h2,m1,m2;
	h1=h/10;
	h2=h-(10*(h/10));
	m1=m/10;
	m2=m-(10*(m/10));
	printf("%d%d:%d%d",h1,h2,m1,m2);
	return 0;
}
