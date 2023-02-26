#include <bits/stdc++.h>
using namespace std;

// Time Complexity  O(m * n) + O(m * n)
// Space Cmplexity O(1)
// Assuming m --> no. of rows, n --> no. of columns

void fun(vector<vector<int>> &matrix)
{
    int col0 = 1, m = matrix.size(), n = matrix.at(0).size();
    
    for(int i = 0; i < m; i++)
    {
        if(matrix.at(i).at(0) == 0) col0 = 0;
        for(int j = 1; j < n; j++)
        {
            if(matrix.at(i).at(j) == 0)
                matrix.at(i).at(0) = matrix.at(0).at(j) = 0;
        }
    }

    for(int i = m - 1; i >= 0; i--)
    {
        for(int j = n - 1; j >= 1; j--)
        {
            if(matrix.at(i).at(0) == 0 || matrix.at(0).at(j) == 0)
                matrix.at(i).at(j) = 0;
        }
        if(col0 == 0) matrix.at(i).at(0) = 0;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 1},
                                  {1, 0, 1, 1},
                                  {1, 1, 0, 1},
                                  {0, 0, 0, 1}};
    fun(matrix);
    for(auto a: matrix)
    {
        for(auto b: a)
            cout << b << " ";
        cout << endl;
    }
    return 0;
}