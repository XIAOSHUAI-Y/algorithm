#include <stdio.h>

int main()
{
	int s1,s2,s3;
	scanf("%d %d %d",&s1,&s2,&s3);
	int a[s1+5],b[s2+5],c[s3+5],d[100001];
	for(int i=1;i<=s1;i++){
		a[i]=i;
	}
	for(int i=1;i<=s2;i++){
	    b[i]=i;
	}
	for(int i=1;i<=s3;i++){
		c[i]=i;
	}
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				int m;
				m=a[i]+b[j]+c[k];
				d[m]++;
			}
		}
	}
	int max=d[3],s;
	for(int i=3;i<=s1+s2+s3;i++){
		if(d[i]>max){
			max=d[i];
			s=i;
		}
	}
	printf("%d",s);
	return 0;
 } 
