#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n, stk[N], tt;

int main()
{
    //用scanf和printf更快
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x; 
        scanf("%d", &x);
        while(tt && stk[tt] >= x) tt--;  //如果大于x，出栈
        if(tt) printf("%d ", stk[tt]);  //如果栈不为空，则输出栈顶，即x左边第一个小于x的值
        else printf("-1 "); //如果栈为空，则输出-1

        stk[++tt] = x; //压入x
    }
    return 0;
}