#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long minimumTime(vector<int> &time, int totalTrips)
{
    ll start = 1;
    ll end = 1e14;
    while (start <= end)
    {
        ll trip = 0;
        ll mid = start + (end - start) / 2;
        for (int i = 0; i < time.size(); i++)
            trip += mid / time[i];
        if (trip < totalTrips)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return start;
}

int main()
{
    vector<int> time = {1, 2, 3};
    cout << minimumTime(time, 5);
    return 0;
}