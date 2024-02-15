#include <iostream>

using namespace std;

int n, t;
int f[1010], g[200];

void quick_sort(int f[], int l, int r)
{
    if (l == r)
        return;
    int x = f[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
        {
            i++;
        } while (f[i] < x);
        do
        {
            j--;
        } while (f[j] > x);
        if (i < j)
            swap(f[i], f[j]);
    }
    quick_sort(f, l, j);
    quick_sort(f, j + 1, r);
}

int main()
{
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        f[t] += 1;
    }
    for (int i = 0; i < 1001; i++)
    {
        if (f[i] >= 1)
        {

            g[sum++] = i;
        }
    }
    printf("%d\n", sum);
    // quick_sort(g, 0, sum - 1);
    for (int i = 0; i < sum; i++)
    {
        printf("%d ", g[i]);
    }
}
