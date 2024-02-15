#include <bits/stdc++.h>

using namespace std;

const int N = 100010;
int n, tt;
int stk[N];

int main()
{
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "push")//队尾插入
        {
            int a;
            cin >> a;
            stk[++tt] = a;
        }
        else if (s == "pop")//队尾删除
        {
            tt--;
        }
        else if (s == "empty")//判断是否为空
        {
            if (tt > 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << stk[tt] << endl;//查找元素
        }
    }
    return 0;
}