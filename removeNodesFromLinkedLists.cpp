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

ListNode *removeNodes(ListNode *head)
{
    ListNode *ptr = new ListNode();
    ptr = head;
    stack<ListNode *> st;
    while (ptr != NULL)
    {
        if (st.empty() == true)
        {
            st.push(ptr);
            head = ptr;
            ptr = ptr->next;
        }
        else if (st.top()->val >= ptr->val)
        {
            st.top()->next = ptr;
            st.push(ptr);
            ptr = ptr->next;
        }
        else
            st.pop();
    }

    return head;
}

int main()
{
    
    return 0;
}