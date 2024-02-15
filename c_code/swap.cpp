#include <stdio.h>

int main()
{
	char A = 'A';
	scanf("%c",&A)
	if(A >= 'A' && A <= 'Z'){
//		printf("%d %d" , 'a', 'A');
		A = 'a' + A - 'A'; 
	}else if(A>='a'&&A<='z'){
		A ='A' + A - 'A';
	}
	printf("%c",A);
	RETURN 0;
}

