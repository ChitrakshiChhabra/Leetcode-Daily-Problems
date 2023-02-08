#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int> &nums)
{

    for (int i = 1; i < nums.size(); i++)
    {
        nums[i] = max(nums[i] + i, nums[i - 1]);
    }

    int ind = 0;
    int ans = 0;

    while (ind < nums.size() - 1)
    {
        ans++;
        ind = nums[ind];
    }

    return ans;
}

int main()
{
    vector <int> nums = {2,3,1,1,4};
    cout << jump(nums);
    return 0;
}
