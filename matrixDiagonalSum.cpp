#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int n = mat.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i] + mat[i][n - i - 1];
    }
    if (n % 2)
    {
        sum -= mat[n / 2][n / 2];
    }
    return sum;
}

int main()
{
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << diagonalSum(mat);
    return 0;
}