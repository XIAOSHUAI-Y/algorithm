// 单链表
#include <bits/stdc++.h>

using namespace std;

typedef struct ListNode
{
    int date;
    ListNode *next;
} ListNode;

ListNode *a[1000010];

// 头插
void headinsert(ListNode *head, int num)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->next = head->next;
    head->next = p;
    p->date = num;
}

// 将元素y插在x后面
void insert(int x, int y)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->date = y;
    p->next = a[x]->next;
    a[x]->next = p;
    a[y] = p;
}

// 询问元素
void *search(int target)
{
    if(a[target]->next == NULL) cout << "0" << '\n';
    else cout << a[target]->next->date << '\n';
}

// 删除
void del(int x)
{
    ListNode *p = a[x]->next;
    a[x]->next = p->next;
    free(p);
}

int main()
{
    ListNode *head = (ListNode *)malloc(sizeof(ListNode));
    head->next = NULL;
    headinsert(head, 1);
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x, y;
            cin >> x >> y;
            insert(x, y);
        }
        else if (a == 2)
        {
            int x;
            cin >> x;
            search(x);
        }
        else
        {
            int x;
            cin >> x;
            del(x);
        }
    }
    return 0;
}


// 双向链表
#include <bits/stdc++.h>
using namespace std;

typedef struct Listnode
{
    int date;
    Listnode *prev;
    Listnode *next = NULL;
} Listnode;

Listnode *a[100010];
Listnode *head = (Listnode *)malloc(sizeof(Listnode)); // 初始化为NULL
bool vist[100010];
// 头插
void headinsert(int x)
{
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    p->date = x;
    p->next = head->next;
    p->prev = head;
    head->next = p;
    a[x] = p;
}
// 左插
void linsert(int num, int position)
{
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    p->date = num;
    p->prev = a[position]->prev;
    p->next = a[position];
    a[position]->prev = p;
    if (p->prev != NULL)
    {
        p->prev->next = p;
    }
    a[num] = p;
    if (head->next == a[position])
    {
        head->next = p; // 更新头节点
    }
}
// 右插
void rinsert(int num, int position)
{
    Listnode *p = (Listnode *)malloc(sizeof(Listnode));
    p->date = num;
    p->prev = a[position];
    p->next = a[position]->next;
    a[position]->next = p;
    if (p->next != NULL)
        p->next->prev = p;
    a[num] = p;
}

// 删除
void rem(int x)
{
    Listnode *prevNode = a[x]->prev;
    Listnode *nextNode = a[x]->next;
    if (prevNode != NULL)
        prevNode->next = nextNode;
    if (nextNode != NULL)
        nextNode->prev = prevNode;
    free(a[x]);  // 释放节点的内存
    a[x] = NULL; // 将节点指针设置为 NULL，以便后续判断节点是否存在
}
// 打印
void printlist()
{
    Listnode *cur = head->next; // 从头节点开始遍历
    while (cur)
    { // 遍历到最后一个节点
        printf("%d ", cur->date);
        cur = cur->next;
    }
    cout << endl;
}
int main()
{
    head->prev = NULL;
    head->next = NULL;
    int n, t, position, num, way, del;
    cin >> n;
    memset(vist, 0, sizeof vist);
    headinsert(1); // 先插入一个节点作为头节点，方便后续操作
    for (int i = 2; i <= n; i++)
    {
        scanf("%d %d", &position, &way);
        if (way == 0)
            linsert(i, position);
        else
            rinsert(i, position);
    }
    cin >> del;
    while (del--)
    {
        scanf("%d", &num);
        if (vist[num])
            continue;
        rem(num);
        vist[num] = true;
    }
    printlist();
}
