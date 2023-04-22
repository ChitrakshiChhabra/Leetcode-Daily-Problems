#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int scoreOfParentheses(string s)
{
    stack<int> st;
    int score = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(score);
            score = 0;
        }
        else
        {
            score = st.top() + max(2 * score, 1);
            st.pop();
        }
    }
    return score;
}
int main()
{
    cout << scoreOfParentheses("()");
    return 0;
}