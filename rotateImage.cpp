#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rotate(vector<vector<int>> &matrix)
{

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < i; j++)
            swap(&matrix.at(i).at(j), &matrix.at(j).at(i));
    }

    for (int i = 0; i < matrix.size(); i++)
        reverse(matrix.at(i).begin(), matrix.at(i).end());
}
int main()
{
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(matrix);
    for(auto a: matrix)
    {
        for(auto b: a)
            cout << b << " ";
        cout << endl;
    }
    return 0;
}