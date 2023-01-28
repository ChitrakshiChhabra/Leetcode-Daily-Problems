#include <iostream>
#include <string>
using namespace std;

bool fun(string s, int index = 0, string ds = "")
{
    if(index == s.size())
    {
        if(ds == "") return true;
        else return false;
    }
    if(s[index] == '(' || s[index] == '{' || s[index] == '[')
    {
        ds+=s[index];
        return fun(s, index + 1, ds);
    }
    else if(s[index] == ')' || s[index] == '}' || s[index] == ']')
    {
        if(ds.size() == 0) return false;
        char braceType = ds[ds.size() - 1];
        if((braceType == '(' && s[index] == ')') || 
            (braceType == '{' && s[index] == '}') ||
            (braceType == '[' && s[index] == ']'))
        {
            ds.erase(ds.begin() + (ds.size() - 1));
            return fun(s, index + 1, ds);
        }
        else
            return false;
    }
    return false;
        
}

bool isValid(string s) {
        
        return fun(s);
}



int main()
{
    cout << isValid("({[]})");

    return 0;
}