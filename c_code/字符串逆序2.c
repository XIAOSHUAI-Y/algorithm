#include <stdio.h>

int n,a[10010][10010],x=1,y,cnt=2;//cnt��ֵΪ2����Ϊ��2��ʼ����
int main()
{
	scanf("%d",&n);//���벻����
	y=(n+1)/2;//��x,y��ֵ��k-1)���긳ֵΪ1,(n+1)/2;
	a[x][y]=1;//����һ�����м������ֵΪ1.
	int now=n*n;
	for(int i=2;i<=now;++i)
	{
	    if(x==1&&y!=n)//ģ���һ�����
	    {
	    	a[n][y+1]=cnt;
	    	x=n;
	    	y+=1;
	    	cnt++;
		}
		else if(x!=1&&y==n)//ע����elseģ��ڶ������
		{
			a[x-1][1]=cnt;
			x-=1;
			y=1;
			cnt++;
		}
		else if(x==1&&y==n)//ģ����������
		{
			a[x+1][y]=cnt;
			x+=1;
			cnt++;
		}
		else //���������
		{
			if(a[x-1][y+1]==0)//���k-1���Ϸ���δ����
			{
				a[x-1][y+1]=cnt;
				x-=1;
				y+=1;
				cnt++;
			}
			else//��֮~
			{
				a[x+1][y]=cnt;
				x+=1;
				cnt++;
			}
		}
	}
	for(int i=1;i<=n;++i)//�������
	{
		for(int e=1;e<=n;++e)
		printf("%d ",a[i][e]);
		printf("\n");
	}
    return 0;//�Ұ�return 0;
}
