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
void reorderList(ListNode *head)
{
    if (head == NULL || head->next == NULL) return;
    stack<ListNode *> st;
    ListNode *first = head, *slow = head, *fast = head->next;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next != NULL)
            fast = fast->next;
    }
    slow = slow->next;
    while (slow != NULL)
    {
        st.push(slow);
        slow = slow->next;
    }
    while (!st.empty())
    {
        st.top()->next = first->next;
        first->next = st.top();
        first = st.top()->next;
        st.pop();
        if (!st.empty())
            st.top()->next = NULL;
        else
            first->next = NULL;
    }
}
int main()
{
    return 0;
}