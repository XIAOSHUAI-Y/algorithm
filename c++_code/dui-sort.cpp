#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int n, m;
int h[N], size;

void down(int u)
{
    int t = u;
    if (u * 2 <= size && h[u * 2] < h[t])
        t = u * 2; // 左儿子存在并且左儿子小于父节点
    if (u * 2 + 1 <= size && h[u * 2 + 1] < h[t])
        t = u * 2 + 1; // 右儿子存在并且右儿子小于父节点
    if (u != t)
    {
        swap(h[t], h[u]);
        down(t);
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &h[i]);
    size = n;
    // 从小到大排序
    for (int i = n / 2; i > 0; i--)
        down(i);
    // 输出排序后的前m个数
    while (m--)
    {
        printf("%d ", h[1]);
        h[1] = h[size];
        size--;
        down(1);
    }
    return 0;
}