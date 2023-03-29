#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &nums, int low, int mid, int high)
{
    int count = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (j <= high && nums[i] > 2LL * nums[j])
            j++;
        count += (j - (mid + 1));
    }

    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (nums[left] < nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
        nums[i] = temp[i - low];

    return count;
}
int ms(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return 0;
    int mid = (low + high) / 2;
    int inv = ms(nums, low, mid);
    inv += ms(nums, mid + 1, high);
    inv += merge(nums, low, mid, high);
    return inv;
}
int reversePairs(vector<int> &nums)
{
    return ms(nums, 0, nums.size() - 1);
}

int main()
{
    return 0;
}