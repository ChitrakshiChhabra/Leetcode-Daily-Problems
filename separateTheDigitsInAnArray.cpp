#include <iostream>
#include <vector>
using namespace std;
vector<int> separateDigits(vector<int> &nums)
{
    vector<int> ans;
    for (auto n : nums)
    {
        vector<int> t;
        while (n > 0)
        {
            t.push_back(n % 10);
            n = n / 10;
        }
        for (int i = t.size() - 1; i >= 0; --i)
            ans.push_back(t[i]);
    }
    return ans;
}
int main()
{
    vector <int> nums = {13,25,83,77};
    nums = separateDigits(nums);
    for(auto a: nums)
        cout << a << " ";
    cout << endl;
    return 0;
}