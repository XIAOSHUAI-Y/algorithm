#include <bits/stdc++.h>

using namespace std;

typedef struct ListNode
{
    int date;
    ListNode *next;
} ListNode;

// 头插
void headinsert(ListNode *head, int num)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->next = head->next;
    head->next = p;
    p->date = num;
}

// 将元素y插在x后面
void insert(ListNode *head, int x, int y)
{
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    // 保存头指针
    ListNode *cur = head;
    // 从头开始找
    while (cur)
    {
        // 找到x
        if (cur->date == x)
        {
            p->next = cur->next;
            cur->next = p;
            p->date = y;
        }
        cur = cur->next;
    }
}

// 询问元素
void *search(ListNode *head, int target)
{
    // 保存头指针
    ListNode *cur = head->next;
    while (cur != NULL)
    {
        if (cur->date == target)
        {
            if (cur->next == NULL)
            {
                cout << "0" << '\n';
            }
            else
            {
                cur = cur->next;
                cout << cur->date << '\n';
            }
        }
        cur = cur->next;
    }
    return NULL;
}

// 删除
void del(ListNode *head, int x)
{
    ListNode *cur = head->next;
    while (cur)
    {
        if (cur->date == x)
        {
            ListNode *temp = cur->next;
            cur->next = temp->next;
            free(temp);
        }
        cur = cur->next;
    }
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
            insert(head, x, y);
        }
        else if (a == 2)
        {
            int x;
            cin >> x;
            search(head, x);
        }
        else
        {
            int x;
            cin >> x;
            del(head, x);
        }
    }
    return 0;
}