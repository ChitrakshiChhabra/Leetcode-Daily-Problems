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

ListNode *rotateRight(ListNode *head, int k)
{

    if (k == 0 || head == NULL || head->next == NULL)
        return head;
    ListNode *cur = head;
    int length = 1;
    while (cur->next != NULL && ++length)
        cur = cur->next;

    cur->next = head;
    k = k % length;
    k = length - k;
    while (k--)
        cur = cur->next;
    head = cur->next;
    cur->next = NULL;
    return head;
}

int main()
{
    
    return 0;
}