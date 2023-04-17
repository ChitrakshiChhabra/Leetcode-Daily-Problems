#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{

    vector<bool> finalAns;
    int maxCandies = 0;
    for (int i = 0; i < candies.size(); i++)
        if (maxCandies < candies[i])
            maxCandies = candies[i];

    for (int i = 0; i < candies.size(); i++)
    {
        int num = candies[i] + extraCandies;
        if (num >= maxCandies)
            finalAns.push_back(true);
        else
            finalAns.push_back(false);
    }

    return finalAns;
}

    int main()
    {
        return 0;
    }