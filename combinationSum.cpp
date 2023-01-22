#include <iostream>
#include <vector>
using namespace std;

// Combination Sum Problem on Leetcode
vector <vector<int>> ans;
    void fun(vector <int> &candidates, int target, int i = 0, vector <int> s = {})
    {
        if(i == candidates.size())
        {
            if(target == 0)
                ans.push_back(s);
            return;
        }
        if(target >= candidates.at(i))
        {
            s.push_back(candidates.at(i));
            fun(candidates, target - candidates.at(i), i, s);
            s.pop_back();
        }
        fun(candidates, target, i + 1, s);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        ans.clear();
        fun(candidates, target);
        return ans;
    }

int main()
{

    vector <int> candidates = {2,3,6,7};
    vector <vector<int>> solution = combinationSum(candidates, 7);

    for(auto a: solution)
    {
        for(auto b: a)
            cout << b <<" ";
        cout << endl;
    }

    return 0;
}