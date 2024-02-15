// 法一：模拟链表
#include <iostream>

using namespace std;

int n, m;
int x, p;

struct student
{
    int l;
    int r;
} a[100010];

void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i].l = a[i].r = -1;
    }
    a[1].r = -1;
    a[1].l = 0;
    a[0].r = 1;
}

void rinsert(int x, int pos)
{
    a[x].l = pos;
    a[a[pos].r].l = x;
    a[x].r = a[pos].r;
    a[pos].r = x;
}

void linsert(int x, int pos)
{
    a[x].r = pos;
    a[a[pos].l].r = x;
    a[x].l = a[pos].l;
    a[pos].l = x;
}

void remove(int x)
{
    if (a[x].l == -1)
        return;
    a[a[x].l].r = a[x].r;
    a[a[x].r].l = a[x].l;
    a[x].l = -1;
    a[x].r = -1;
}

void printlist()
{
    int x = a[0].r;
    while (1)
    {
        cout << x << ' ';
        if (a[x].r == -1)
            break;
        x = a[x].r;
    }
}

int main()
{
    cin >> n;
    int k, p;
    init();
    for (int i = 2; i <= n; i++)
    {
        cin >> k >> p;
        if (p == 1)
            rinsert(i, k);
        else
            linsert(i, k);
    }
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        remove(x);
    }
    printlist();
    return 0;
}

// 法二：链表
#include <bits/stdc++.h>
using namespace std;

typedef struct Listnode
{
    int date;
    Listnode *prev;
    Listnode *next;
} Listnode;

Listnode *a[100010];

Listnode *initlist()
{
    Listnode *head = (Listnode *)malloc(sizeof(Listnode));
    head->next = head;
    head->prev = head;
    return head;
}

// 头插
void headinsert(Listnode *head, int x)
{
    Listnode *cur = head->next;
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    p->date = x;
    head->next = p;
    p->prev = head;
    p->next = cur;
    cur->prev = p;
}

// 左插
void linsert(int x, int y)
{
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    Listnode *g = a[y]->prev;
    p->date = x;
    p->next = g->next;
    p->prev = a[y]->prev;
    g->next = p;
    a[y]->prev = p;
    a[x] = p;
}

// 右插
void rinsert(int x, int y)
{
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    Listnode *g = a[y]->next;
    p->date = x;
    p->prev = g->prev;
    p->next = a[y]->next;
    g->prev = p;
    a[y]->next = p;
    a[x] = p;
}

// 删除
void remove(Listnode *head, int x)
{
    Listnode *cur = head->next;
    while (cur)
    {
        if (cur->next->date == x)
        {
            Listnode *temp = cur->next;
            Listnode *g = cur->next->next;
            cur->next = g;
            g->prev = cur;
            free(temp);
            break;
        }
        cur = cur->next;
    }
}

void printlist(Listnode *head)
{
    Listnode *cur = head->next;
    while (cur != head)
    {
        cout << cur->date << ' ';
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    Listnode *head = initlist();
    int n, num, t, k, p, m;
    cin >> n;
    bool vist[n + 10];
    memset(vist, 0, sizeof vist);
    num = 1;
    t = n - 1;

    headinsert(head, 1);
    while (t--)
    {
        num++;
        cin >> k >> p;
        if (p == 0)
        {
            // cout << "l " << k << "insert: " << num << endl;
            linsert(num, k);
        }
        else
        {
            // cout << "r " << k << "insert: " << num << endl;
            rinsert(num, k);
        }
    }

    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        if (vist[x])
            continue;
        remove(head, x);
        vist[x] = true;
    }
    printlist(head);
}