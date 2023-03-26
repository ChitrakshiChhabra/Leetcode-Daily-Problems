#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    vector<int> finalAns;
    int element1, element2, cnt1, cnt2;
    element1 = element2 = -1;
    cnt1 = cnt2 = 0;

    for (auto a : nums)
    {
        if (a == element1)
            cnt1++;
        else if (a == element2)
            cnt2++;
        else if (cnt1 == 0)
        {
            element1 = a;
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            element2 = a;
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = cnt2 = 0;
    for (auto a : nums)
    {
        if (a == element1)
            cnt1++;
        else if (a == element2)
            cnt2++;
    }
    if (cnt1 > (nums.size() / 3))
        finalAns.push_back(element1);
    if (cnt2 > (nums.size() / 3))
        finalAns.push_back(element2);
    return finalAns;
}
int main()
{
    vector <int> nums = {3,2,3};
    nums = majorityElement(nums);
    for(auto a: nums)
        cout << a << " ";
    cout << endl;
    return 0;
}