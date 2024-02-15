#include <iostream>

using namespace std;

const int N = 1e6 + 10;
long long n, m;
long long f[N];

int main()
{
    scanf("%lld %lld ", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &f[i]);
    }
    while (m--)
    {
        int x;
        scanf("%lld", &x);
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (f[mid] >= x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (f[l] != x)
        {
            printf("-1 ");
        }
        else
        {
            printf("%lld ", l + 1);
        }
    }
    return 0;
}