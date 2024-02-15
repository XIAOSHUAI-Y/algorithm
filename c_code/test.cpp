#include<stdio.h>

void mov(int* x, int n, int m);

int main()
{
	int a[10] = {0};
	int n = 0, m = 0;
	// n 数组长度 m 是移动长度 
	scanf("%d %d",&n, &m);
	for(int i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
	} 
	mov(a,n,m);
	for(int i = 0; i < n; i ++) {
		printf("%d ", a[i]);
	}
	return 0; 
}

void mov(int* x, int n, int m) {
	int b[10] = {0};
	for(int i = 0; i < n; i ++) {
		int am = (i+m+n)%n;
		b[am] = x[i];
	}
	for(int i = 0; i < n; i ++) {
		x[i] = b[i];
	}
}

