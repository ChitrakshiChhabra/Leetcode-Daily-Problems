#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

string simplifyPath(string path)
{
    path = path + "/";
    stack<string> st;
    string current = "";
    for (int i = 0; i < path.size(); i++)
    {
        if (path[i] == '/')
        {
            if (current == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else if (current != "." && current != "")
                st.push(current);
            current = "";
        }
        else
            current += path[i];
    }
    current = "";
    if (st.empty())
        current = "/";
    while (!st.empty())
    {
        current = "/" + st.top() + current;
        st.pop();
    }

    return current;
}

int main()
{
    return 0;
}
