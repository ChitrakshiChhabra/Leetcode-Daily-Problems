#include <iostream>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeNodes(ListNode *head)
{
    head = head->next;
    ListNode *p = head->next, *q = head;

    while (p != NULL && q != NULL)
    {
        if (p->val == 0)
        {
            q->next = p->next;
            q = p->next;
            p = p->next;
            if (p != NULL)
                p = p->next;
        }
        else
        {
            q->val = q->val + p->val;
            p = p->next;
        }
    }
    return head;
}

int main()
{
    return 0;
}