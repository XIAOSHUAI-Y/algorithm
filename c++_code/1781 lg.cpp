#include <iostream>
#include <algorithm>

using namespace std;

struct zongtong
{
    string x;
    int num;
    int len;
} people[30];

bool cmp(zongtong a, zongtong b)
{
    if (a.len > b.len)
        return true;
    else if (a.len == b.len && a.x > b.x)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> people[i].x;
        people[i].num = i;
        people[i].len = people[i].x.size();
    }
    sort(people + 1, people + 1 + n, cmp);
    cout << people[1].num << endl
         << people[1].x;
    return 0;
}
