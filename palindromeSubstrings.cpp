#include <iostream>
#include <cstring>
using namespace std;

int countSubstrings(string s)
{
    int n = s.size();
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
        count++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
            count++;
        }
    }
    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = len + i - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = 1;
                count++;
            }
        }
    }

    return count;
}
int main()
{
    return 0;
}