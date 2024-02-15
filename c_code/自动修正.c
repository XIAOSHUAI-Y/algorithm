#include <stdio.h>

int main()
{
	char arr[110];
	scanf("%s",arr);
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]>='a'&&arr[i]<='z'){
			printf("%c",arr[i]+'A'-'a');
		}
		else{
			printf("%c",arr[i]);
		}
	}
	return 0;
}
