#include <stdio.h>
#include <string.h>
int main()
{
	char a[110]={0};
	scanf("%s",a);
	//找到字符串a的长度 
	int l=strlen(a);
	int n=0,idx;
	for(int i=0;i<l;i++){
		if(a[i]=='*'){
			//找到*所在的下标 
			idx=i;
		}
	}
	//从idx+1开始后面都是数字，即n 
	for(int i=idx+1;i<l;i++){
		//数组a是char类型，而n是int类型，所以用a[i]-'0'把char转化为int 
		n=n*10+(a[i]-'0');
	} 
	//只取*前面的部分，则在*的地方结束 
	a[idx]='\0';
	for(int i=0;i<n;i++){
		printf("%s",a);
	}
	return 0;
}
