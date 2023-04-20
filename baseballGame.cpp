#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int calPoints(vector<string> &operations)
{
    stack<int> st;

    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "+")
        {
            int x = st.top();
            st.pop();
            int y = st.top() + x;
            st.push(x);
            st.push(y);
        }
        else if (operations[i] == "D")
            st.push(st.top() * 2);
        else if (operations[i] == "C")
            st.pop();
        else
            st.push(stoi(operations[i]));
    }
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    return sum;
}

int main()
{
    vector <string> operations = {"5","2","C","D","+"};
    cout << calPoints(operations);
    return 0;
}