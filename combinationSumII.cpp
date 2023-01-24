#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <vector<int>> ans;
void fun(vector <int> &array, int target, int index = 0, vector <int> ds = {})
{
    
    if(target == 0)
    {   ans.push_back(ds);
        return;
    }
    for(int i = index; i < array.size(); i++)
    {
        if(i > index &&    array.at(i) == array.at(i - 1))
            continue;
                
        if(array.at(i) > target)
            break;
        ds.push_back(array.at(i));
        fun(array, target - array.at(i), i + 1, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    ans.clear();
    sort(candidates.begin(), candidates.end());
    fun(candidates, target);
    return ans;
        
}

int main()
{
    vector <int> candidates = {10,1,2,7,6,1,5};
    combinationSum2(candidates, 8);
    return 0;
}