#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	string b[10];
	for(int i=0;i<n;i++){
		scanf("%d",%a[i]);
		if(a[i]=='0'){
			b[1]+="xxx.";
			b[2]+="x.x.";
			b[3]+="x.x.";
			b[4]+="x.x.";
			b[5]+="xxx.";
		}
		if(a[i]=='1'){
			b[1]+="..x.";
			b[2]+="..x.";
			b[3]+="..x.";
			b[4]+="..x.";
			b[5]+="..x.";
		}
		if(a[i]=='2'){
			b[1]+="xxx.";
			b[2]+="..x.";
			b[3]+="xxx.";
			b[4]+="x...";
			b[5]+="xxx.";
		}
		if(a[i]=='3'){
			b[1]+="xxx.";
			b[2]+="..x.";
			b[3]+="xxx.";
			b[4]+="..x.";
			b[5]+="xxx.";
		}
		if(a[i]=='4'){
			b[1]+="x.x.";
			b[2]+="x.x.";
			b[3]+="xxx.";
			b[4]+="..x.";
			b[5]+="..x.";
		}
		if(a[i]=='5'){
			b[1]+="xxx.";
			b[2]+="x...";
			b[3]+="xxx.";
			b[4]+="..x.";
			b[5]+="xxx.";
		}
		if(a[i]=='6'){
			b[1]+="xxx.";
			b[2]+="x...";
			b[3]+="xxx.";
			b[4]+="x.x.";
			b[5]+="xxx.";
		}
		if(a[i]=='7'){
			b[1]+="xxx.";
			b[2]+="..x.";
			b[3]+="..x.";
			b[4]+="..x.";
			b[5]+="..x.";
		}
		if(a[i]=='8'){
			b[1]+="xxx.";
			b[2]+="x.x.";
			b[3]+="xxx.";
			b[4]+="x.x.";
			b[5]+="xxx.";
		}
		if(a[i]=='9'){
			b[1]+="xxx.";
			b[2]+="x.x.";
			b[3]+="xxx.";
			b[4]+="..x.";
			b[5]+="xxx.";
		}
	}
	for(int i=0;i<5;i++){
		ans[i]=ans[i].substr(0,ans[i].length()-1);  
		printf("%d",&a[i]);
	}
	return 0;
}
