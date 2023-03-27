#include <iostream>
#include <vector>
using namespace std;

int fun(int m, int n, int i, int j, vector<vector<int>> &dp)
{
    if (i == m || j == n)
        return 0;
    if (i == (m - 1) && j == (n - 1))
        return 1;
    if (dp[i][j] > -1)
        return dp[i][j];
    else
        return dp[i][j] = fun(m, n, i, j + 1, dp) + fun(m, n, i + 1, j, dp);
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return fun(m, n, 0, 0, dp);
}

int main()
{
    cout << uniquePaths(3, 7);
    return 0;
}