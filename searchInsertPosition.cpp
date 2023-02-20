#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int hi = nums.size() - 1, lo = 0;
    while (hi >= lo)
    {
        int mid = (hi + lo) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return lo;
}

int main()
{
    vector <int> nums = {1,3,5,6};
    cout << searchInsert(nums, 7) << endl;
    return 0;
}