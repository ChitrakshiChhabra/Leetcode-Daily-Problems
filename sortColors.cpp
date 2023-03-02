#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums.at(mid) == 0)
        {
            swap(&nums.at(mid), &nums.at(low));
            low++;
            mid++;
        }
        else if (nums.at(mid) == 2)
        {
            swap(&nums.at(mid), &nums.at(high));
            high--;
        }
        else
            mid++;
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for (auto a : nums)
        cout << a << " ";
    return 0;
}