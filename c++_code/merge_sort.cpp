#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int n;
int f[N], g[N];

void merge_sort(int f[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int mid = (l + r) / 2;
    merge_sort(f, l, mid), merge_sort(f, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
    {
        if (f[i] < f[j])
        {
            g[k++] = f[i++];
        }
        else
        {
            g[k++] = f[j++];
        }
    }
    while (i <= mid)
    {
        g[k++] = f[i++];
    }
    while (j <= r)
    {
        g[k++] = f[j++];
    }
    for (int i = l, j = 0; i <= r; i++, j++)
    {
        f[i] = g[j];
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &f[i]);
    }
    merge_sort(f, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", f[i]);
    }
    return 0;
}