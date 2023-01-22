#include <iostream>
#include <vector>
using namespace std;

int digitSum(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {

        int elemSum = 0, digSum = 0, diff = 0;

        for(auto a: nums)
        {
            elemSum+=a;
            if(a > 9)
                digSum+=digitSum(a);
            else
                digSum+=a;
        }

        diff = elemSum - digSum;
        if(diff < 0)
            diff*=-1;
        
        return diff;
        
    }
int main()
{
    vector <int> nums = {1, 15, 6, 3};
    cout << differenceOfSum(nums) << endl;
    return 0;
}