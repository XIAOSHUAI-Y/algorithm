#include <stdio.h>

int n,a[10010][10010],x=1,y,cnt=2;//cnt赋值为2，因为从2开始填数
int main()
{
	scanf("%d",&n);//输入不解释
	y=(n+1)/2;//将x,y的值（k-1)坐标赋值为1,(n+1)/2;
	a[x][y]=1;//将第一行最中间的数赋值为1.
	int now=n*n;
	for(int i=2;i<=now;++i)
	{
	    if(x==1&&y!=n)//模拟第一种情况
	    {
	    	a[n][y+1]=cnt;
	    	x=n;
	    	y+=1;
	    	cnt++;
		}
		else if(x!=1&&y==n)//注意有else模拟第二种情况
		{
			a[x-1][1]=cnt;
			x-=1;
			y=1;
			cnt++;
		}
		else if(x==1&&y==n)//模拟第三种情况
		{
			a[x+1][y]=cnt;
			x+=1;
			cnt++;
		}
		else //第四种情况
		{
			if(a[x-1][y+1]==0)//如果k-1右上方还未填数
			{
				a[x-1][y+1]=cnt;
				x-=1;
				y+=1;
				cnt++;
			}
			else//反之~
			{
				a[x+1][y]=cnt;
				x+=1;
				cnt++;
			}
		}
	}
	for(int i=1;i<=n;++i)//完美输出
	{
		for(int e=1;e<=n;++e)
		printf("%d ",a[i][e]);
		printf("\n");
	}
    return 0;//我爱return 0;
}
