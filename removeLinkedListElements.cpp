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
ListNode *removeElements(ListNode *head, int val)
{
    if (head == NULL)
        return head;
    ListNode *ptr, *prev;
    ptr = head;
    prev = NULL;
    while (ptr != NULL)
    {
        if (ptr->val == val)
        {
            if (prev == NULL)
            {
                head = head->next;
                ptr = head;
            }
            else
            {
                prev->next = ptr->next;
                ptr = ptr->next;
            }
        }
        else
        {
            prev = ptr;
            ptr = ptr->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}