#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e8 + 10;
long long n, m, sum;
long long f[N];

int main()
{
    scanf("%lld %lld", &n, &m);
    long long left = 0, right = 0;
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &f[i]);
        right = max(right, f[i]);
    }
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        sum = 0;
        for (long long i = 0; i < n; i++)
        {
            if (f[i] > mid)
            {
                sum += (f[i] - mid);
            }
        }
        if (sum < m)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    printf("%lld", left - 1);
    return 0;
}
