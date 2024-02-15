#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1e5 + 10;
int n;
int f[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    reverse(f + 1, f + n - 1);
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (f[mid] < mid + 1)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    printf("%d", f[l] < f[l + 1] ? f[l] : f[l + 1]);
    return 0;
}