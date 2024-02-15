#include <stdio.h>

int main()
{
	int x,y,z;
	char l,m,n;
	scanf("%d %d %d\n",&x,&y,&z);
	int a,b,c;
	if(x<y&&x<z)
	{
		a=x;
		if(y<z)
		{
			b=y;c=z;
	    }
	    else{
	    	b=z;c=y;
		}
	}else if(y<x&&y<z)
	{
		a=y;
		if(x<z)
		{
			b=x;c=z;
	    }
	    else{
	    	b=z;c=x;
		}
	}else
	{
		a=z;
		if(x<y)
		{
			b=x;c=y;
	    }
	    else{
	    	b=y;c=x;
		}
	}
	char temp;
	for(int i=0;i<3;i++)
	{
		scanf("%c",&temp);
		if(temp=='A'){
			printf("%d ",a);
		}
		if(temp=='B'){
			printf("%d ",b);
		}
		if(temp=='C'){
			printf("%d ",c);
		}
	}
	return 0;
}
