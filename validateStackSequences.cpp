#include <iostream>
#include <vector>
#include <stack>
using namespace std;



bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{

    stack<int> st;
    int i = 0, j = 0;

    while (j < popped.size())
    {
        if (!st.empty())
        {
            if (i <= pushed.size() && st.top() == popped[j])
            {
                st.pop();
                j++;
                continue;
            }
            else if (i == pushed.size() && st.top() != popped[j])
                return false;
        }
        if (i < pushed.size())
        {
            st.push(pushed[i]);
            i++;
        }
    }

    return true;
}

int main()
{
    return 0;
}