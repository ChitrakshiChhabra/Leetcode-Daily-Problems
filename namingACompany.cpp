#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

long long distinctNames(vector<string> &ideas)
{

    long long ans = 0;

    unordered_set<string> suffixes[26];

    for (const string &idea : ideas)
        suffixes[idea[0] - 'a'].insert(idea.substr(1));

    for (int i = 0; i < 25; ++i)
        for (int j = i + 1; j < 26; ++j)
        {
            int count = 0;
            for (const string &suffix : suffixes[i])
                if (suffixes[j].count(suffix))
                    ++count;
            ans += 2 * (suffixes[i].size() - count) * (suffixes[j].size() - count);
        }
    return ans;
}

int main()
{
    vector <string> ideas = {"coffee","donuts","time","toffee"};
    cout << distinctNames(ideas);
    return 0;
}