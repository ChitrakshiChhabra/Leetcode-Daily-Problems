#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int size = nums.size();
    int minLength = INT_MAX;

    int low = 0, high = 0;
    int sum = nums[0];
    while (low < size && high < size)
    {
        if (sum >= target)
        { 
            minLength = min(minLength, (high - low) + 1);
            sum -= nums[low];
            low++;
        }
        else
        { 
            high++;
            if (high < size)
                sum += nums[high];
        }
    }
    return minLength == INT_MAX ? 0 : minLength;
}

int main()
{
    return 0;
}