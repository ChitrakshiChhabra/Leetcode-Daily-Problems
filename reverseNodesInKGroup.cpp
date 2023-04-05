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

ListNode *reverseKGroup(ListNode *head, int k)
{
    if (head == NULL || k == 1)
        return head;
    ListNode *dummy = new ListNode();
    dummy->next = head;
    ListNode *cur = dummy, *nex = dummy, *pre = dummy;
    int count = 0;
    while (cur->next != NULL)
    {
        cur = cur->next;
        count += 1;
    }

    while (count >= k)
    {
        cur = pre->next;
        nex = cur->next;

        for (int i = 1; i < k; i++)
        {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        count -= k;
    }
    return dummy->next;
}

int main()
{
    return 0;
}