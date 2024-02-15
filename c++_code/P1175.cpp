#include <bits/stdc++.h>
#define ll long long;

using namespace std;
stack<long long> num;
stack<char> dat;
stack<char> op;
stack<long long> dat2;
int l;
char s[110];

int bj(char x)
{
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int js(char x)
{
    int a = dat2.top();
    dat2.pop();
    int b = dat2.top();
    dat2.pop();
    if (x == '+')
        return a + b;
    else if (x == '-')
        return b - a;
    else if (x == '*')
        return b * a;
    else if (x == '/')
        return b / a;
    else if (x == '^')
        return pow(b, a);
    else
        return -1;
}

void work1()
{
    for (int i = 0; i < l; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            dat.push(s[i]);
        }
        else
        {
            if (op.empty())
            {
                op.push(s[i]);
                continue;
            }
            if (s[i] == '(')
            {
                op.push(s[i]);
                continue;
            }
            char c = op.top();
            if (s[i] == ')')
            {
                while (!op.empty() && c != '(')
                {
                    dat.push(c);
                    op.pop();
                    if (!op.empty())
                    {
                        c = op.top();
                    }
                }
                op.pop();
                continue;
            }
            if (bj(s[i]) > bj(c))
            {
                op.push(s[i]);
            }
            else
            {
                if (bj(s[i]) == bj(c) && bj(c) == 3)
                {
                    op.push(s[i]);
                    continue;
                }
                else
                {
                    while (bj(s[i]) <= bj(c) && !op.empty())
                    {
                        dat.push(c);
                        op.pop();
                        if (!op.empty())
                        {
                            c = op.top();
                        }
                    }
                    op.push(s[i]);
                }
            }
        }
    }
    while (!op.empty())
    {
        char c = op.top();
        dat.push(c);
        op.pop();
    }
    while (!dat.empty())
    {
        char c = dat.top();
        op.push(c);
        dat.pop();
    }
    while (!op.empty())
    {
        char c = op.top();
        cout << c << " ";
        op.pop();
        dat.push(c);
    }
    cout << endl;
}

void work2()
{
    while (!dat.empty())
    {
        char t = dat.top();
        dat.pop();
        op.push(t);
    }
    while (!op.empty())
    {
        char c = op.top();
        if (c >= '0' && c <= '9')
        {
            dat2.push(c - '0');
            op.pop();
        }
        else
        {
            dat2.push(js(c));
            op.pop();
            while (!dat2.empty())
            {
                num.push(dat2.top());
                dat2.pop();
            }
            while (!num.empty())
            {
                cout << num.top() << ' ';
                dat2.push(num.top());
                num.pop();
            }
            while (!op.empty())
            {
                cout << op.top() << ' ';
                dat.push(op.top());
                op.pop();
            }
            while (!dat.empty())
            {
                op.push(dat.top());
                dat.pop();
            }
            cout << endl;
        }
    }
}

int main()
{
    scanf("%s", s);
    l = strlen(s);
    work1();
    work2();
    return 0;
}