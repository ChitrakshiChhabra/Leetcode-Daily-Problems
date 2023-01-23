#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        
        int current_sum = 0;
        int max_sum = nums.at(0);
        
        for (int i = 0; i < nums.size(); i++)
        {
            current_sum+=nums.at(i);
            
            if(current_sum > max_sum)
                max_sum = current_sum;
            
            if(current_sum < 0)
                current_sum = 0;
        }
        
        return max_sum;
        
    }

int main()
{
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);

    return 0;
}