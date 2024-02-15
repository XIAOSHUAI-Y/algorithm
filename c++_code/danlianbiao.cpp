#include <bits/stdc++.h>

using namespace std;
const int N = 100010;
int e[N], ne[N], idx, head;
char t;

void init()
{
    head = -1;
    idx = 0;
}

void add_to_head(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx++;
}

void add(int x, int k)
{
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx++;
}

void remove(int k)
{
    ne[k] = ne[ne[k]];
}

int main()
{
    int m;
    cin >> m;
    init();
    while (m--)
    {
        cin >> t;
        int k, x;
        if (t == 'H')
        {
            cin >> x;
            add_to_head(x);
        }
        else if (t == 'D')
        {
            cin >> k;
            if (k == 0)
                head = ne[head];
            remove(k - 1);
        }
        else
        {
            cin >> k >> x;
            add(x, k - 1);
        }
    }
    for (int i = head; i != -1; i = ne[i])
        cout << e[i] << " ";
    return 0;
}