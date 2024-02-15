#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;

const int N = 1e5 + 10;

int n, a[N];
vector<PII> segs;

void merge(vector<PII> &segs)
{
    vector<PII> res;

    sort(segs.begin(), segs.end());

    int st = -2e9, ed = 2e9;
    for (auto i : segs)
    {
        if (ed < i.first)
        {
            if (st != -2e9)
                res.push_back({st, ed});
            st = i.first, ed = i.second;
        }
        else
            ed = max(ed, i.second);
    }
    if (st != -2e9)
        res.push_back({st, ed});
    segs = res;
}