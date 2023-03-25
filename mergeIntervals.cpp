#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> finalAns;
    if (intervals.size() == 0)
        return finalAns;
    sort(intervals.begin(), intervals.end());
    vector<int> pair = intervals[0];
    for (auto a : intervals)
    {
        if (a[0] <= pair[1])
            pair[1] = max(a[1], pair[1]);
        else
        {
            finalAns.push_back(pair);
            pair = a;
        }
    }
    finalAns.push_back(pair);
    return finalAns;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    intervals = merge(intervals);
    for (auto a : intervals)
    {
        for (auto b : a)
            cout << b << " ";
        cout << endl;
    }

    return 0;
}