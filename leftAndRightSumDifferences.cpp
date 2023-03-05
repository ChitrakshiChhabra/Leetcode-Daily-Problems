#include <bits/stdc++.h>
using namespace std;

vector<int> leftRigthDifference(vector<int> &nums)
{
    vector<int> ans;
    int lsum = 0, rsum = 0;
    for (int i = 0; i < nums.size(); ++i)
        rsum += nums[i];
    for (int i = 0; i < nums.size(); ++i)
    {
        rsum -= nums[i];
        ans.push_back(abs(lsum - rsum));
        lsum += nums[i];
    }
    return ans;
}

int main()
{
    vector <int> nums = {10,4,8,3};
    nums = leftRigthDifference(nums);
    for(auto a: nums)
        cout << a << " ";
    return 0;
}