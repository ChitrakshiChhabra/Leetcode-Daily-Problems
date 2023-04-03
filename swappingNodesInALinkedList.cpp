#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
ListNode *swapNodes(ListNode *head, int k)
{
    vector<int> nums;
    while (head != NULL)
    {
        nums.push_back(head->val);
        head = head->next;
    }

    swap(&nums[k - 1], &nums[nums.size() - k]);
    ListNode *first = new ListNode(nums[0]);
    ListNode *previous = first;
    for (int i = 1; i < nums.size(); i++)
    {
        ListNode *current = new ListNode(nums[i]);
        previous->next = current;
        previous = current;
    }

    return first;
}

int main()
{
    return 0;
}