#include <iostream>
#include <vector>
using namespace std;

int sum= 0;
int fun1(vector <int> &nums)
{
    if(nums.size() == 1) return nums.at(0);
    if(nums.size() == 0) return 0;
    int xorSum = nums.at(0);
    for(int i = 1; i < nums.size(); i++)
        xorSum = xorSum ^ nums.at(i);
    return xorSum;
}
int subsetXORSum(vector<int>& nums,int index = 0, vector <int> ds = {}) {

    if(nums.size() == index)
    {
        sum = sum + fun1(ds);
        return sum;
    }
    ds.push_back(nums.at(index));
    subsetXORSum(nums, index + 1, ds);
    ds.pop_back();
    subsetXORSum(nums, index + 1, ds);
    return sum;
}

int main()
{
    vector <int> nums = {1, 3};
    cout << subsetXORSum(nums);
    return 0;
}