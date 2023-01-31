#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next = NULL;
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    ListNode *first, *temporary_node;
    first = new ListNode;
    temporary_node = first;
    int carry = 0;

    while(l1 != NULL || l2 != NULL || carry)
    {
        int sum = 0;
        if(l1!= NULL)
        {
            sum+=l1-> val;
            l1 = l1 -> next;
        }

        if(l2!= NULL)
        {
            sum+=l2 -> val;
            l2 = l2 -> next;
        }

        sum+=carry;
        carry = sum/10;
        ListNode *current_node = new ListNode();
        current_node -> val = sum%10;
        temporary_node -> next = current_node;
        temporary_node = temporary_node -> next;
    }

    return first-> next;

}
int main()
{
    ListNode *n1, *n2, *n3, *m1, *m2, *m3;
    n1 = new ListNode;
    n2 = new ListNode;
    n3 = new ListNode;
    m1 = new ListNode;
    m2 = new ListNode;
    m3 = new ListNode;

    n1 -> val = 2;
    n1 -> next = n2;
    n2 -> val = 4;
    n2 -> next = n3;
    n3 -> val = 3;

    m1 -> val = 5;
    m1 -> next = m2;
    m2 -> val = 6;
    m2 -> next = m3;
    m3 -> val = 4;
    
    ListNode *first = addTwoNumbers(n1, m1);

    while(first!=NULL)
    {
        cout << first -> val << " ";
        first = first -> next;
    }
    cout << endl;
    return 0;
}