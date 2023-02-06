#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> output;
    for (int i = 0; i < n; i++)
    {
        output.push_back(nums.at(i));
        output.push_back(nums.at(i + n));
    }
    return output;
}

int main()
{
    vector <int> nums = {2,5,1,3,4,7};
    vector <int> array = shuffle(nums, 3);
    for(auto a: array)
        cout << a << " ";
    cout << endl;

    return 0;
}