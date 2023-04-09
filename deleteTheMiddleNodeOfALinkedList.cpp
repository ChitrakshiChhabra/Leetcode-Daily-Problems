#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteMiddle(ListNode *head)
{
    int flag = 1;
    ListNode *slow = head;
    if (head->next == NULL)
        return NULL;
    ListNode *fast = head->next;
    if (fast->next == NULL)
    {
        slow->next = NULL;
        return head;
    }
    ListNode *x = NULL;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        x = slow;
        slow = slow->next;
    }
    if (fast == NULL)
        x->next = slow->next;

    else if (fast->next == NULL)
        slow->next = slow->next->next;
    return head;
}

int main()
{
    return 0;
}