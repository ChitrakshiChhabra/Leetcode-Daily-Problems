#include <bits/stdc++.h>
using namespace std;

int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
{
    int n = profits.size();
    vector<pair<int, int>> projects;
    for (int i = 0; i < n; i++)
        projects.push_back({capital[i], profits[i]});

    sort(projects.begin(), projects.end());
    priority_queue<int> pq;
    int i = 0, j = 0;
    while (k--)
    {
        while (i < n && projects[i].first <= w)
        {
            pq.push(projects[i++].second);
        }
        if (pq.empty())
            break;
        w += pq.top();
        pq.pop();
    }
    return w;
}

int main()
{
    int k = 2, w = 0;
    vector<int> profits = {1, 2, 3}, capital = {0, 1, 1};
    cout << findMaximizedCapital(k, w, profits, capital);
    return 0;
}