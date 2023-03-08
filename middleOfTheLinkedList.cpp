#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *first = head;
    int number_of_nodes = 0;
    int middle;
    while (head != NULL)
    {
        number_of_nodes += 1;
        head = head->next;
    }

    middle = (number_of_nodes) / 2 + 1;

    for (int i = 1; i <= middle; i++)
    {
        if (i == middle)
            break;
        first = first->next;
    }

    return first;
}

int main()
{
    return 0;
}
