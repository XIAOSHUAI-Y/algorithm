#include <stdio.h>
#include <string.h>
int main()
{
	char a[110]={0};
	scanf("%s",a);
	//�ҵ��ַ���a�ĳ��� 
	int l=strlen(a);
	int n=0,idx;
	for(int i=0;i<l;i++){
		if(a[i]=='*'){
			//�ҵ�*���ڵ��±� 
			idx=i;
		}
	}
	//��idx+1��ʼ���涼�����֣���n 
	for(int i=idx+1;i<l;i++){
		//����a��char���ͣ���n��int���ͣ�������a[i]-'0'��charת��Ϊint 
		n=n*10+(a[i]-'0');
	} 
	//ֻȡ*ǰ��Ĳ��֣�����*�ĵط����� 
	a[idx]='\0';
	for(int i=0;i<n;i++){
		printf("%s",a);
	}
	return 0;
}
