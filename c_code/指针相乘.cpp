#include<stdio.h>
#include<stdlib.h>
int** multiply(int** a,int** b,int m,int n)
{
	int **result;
	result=(int **)malloc(n*sizeof(int *));
	int i,j;
	for( i=0;i<n;i++) result[i]=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			int sum=0;
			int k;
			for(k=0;k<n;k++)
			{
				sum=sum+*((int *)a+i*n+k)**((int *)b+k*m+j);
			}
			*((int *)result+i*m+j)=sum;
		}
	}
	return result;
}

int main()
{
	int m=2;
	int n=3;  
	
	int a[2][3]={1,3,2,4,0,1};
	int b[3][2]={1,3,0,1,5,2};
	int** res=(int **)malloc(sizeof(int*)*4);
	res=multiply(a,b,m,n);
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",*((int *)res+i*m+j));
		}
		printf("\n");
	}
	free(res);
	return 0;
}

