#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

string removeStars(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*' && !st.empty())
            st.pop();
        else
            st.push(s[i]);
    }

    string finalAns;
    while (!st.empty())
    {
        finalAns += st.top();
        st.pop();
    }
    reverse(finalAns.begin(), finalAns.end());
    return finalAns;
}
int main()
{
    return 0;
}