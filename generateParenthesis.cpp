#include <iostream>
#include <vector>
using namespace std;

void helper(vector<string> &v, int n, int oc, int cc, string s)
{
    if (oc == n && cc == n)
    {
        v.push_back(s);
        return;
    }
    if (oc < n)
    {
        helper(v, n, oc + 1, cc, s + "(");
    }
    if (cc < oc)
    {
        helper(v, n, oc, cc + 1, s + ")");
    }
}

vector<string> generateParenthesis(int n)
{
    string s = "";
    int cc = 0, oc = 0;
    vector<string> v;
    helper(v, n, oc, cc, "");
    return v;
}
int main()
{
    vector <string> finalAns = generateParenthesis(3);
    for(auto a: finalAns)
        cout << a << " ";
    cout << endl;
    return 0;
}