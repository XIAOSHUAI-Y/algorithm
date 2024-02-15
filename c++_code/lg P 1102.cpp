#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e6;
long long n, c, ans;
long long f[N];

int main()
{
    scanf("%lld %lld", &n, &c);
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &f[i]);
    }
    sort(f, f + n);
    for (long long i = 0; i < n; i++)
    {
        ans += (upper_bound(f, f + n, f[i] + c) - f) - (lower_bound(f, f + n, f[i] + c) - f);
    }
    printf("%lld", ans);
    return 0;
}