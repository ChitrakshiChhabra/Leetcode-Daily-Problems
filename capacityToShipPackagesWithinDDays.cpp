#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &weights, int days, int capacity)
{
    int requiredDays = 1;
    int currWeight = 0;
    for (int i : weights)
    {
        if (currWeight + i > capacity)
        {
            requiredDays++;
            currWeight = 0;
        }
        currWeight += i;
    }
    if (requiredDays > days)
        return false;
    return true;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int left = 0;
    int right = 0;
    for (int i : weights)
    {
        left = max(left, i);
        right += i;
    }
    int mid;
    int ans = right;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (check(weights, days, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}



int main()
{
    vector <int> weights = {1,2,3,4,5,6,7,8,9,10};
    cout << shipWithinDays(weights, 5);
    return 0;
}