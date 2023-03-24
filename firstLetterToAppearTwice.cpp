#include <iostream>
#include <map>
using namespace std;

char repeatedCharacter(string s)
{
    map<char, int> account;
    char ans;
    for (auto a : s)
    {
        if (account.find(a) == account.end())
            account.insert({a, 1});
        else
        {
            ans = a;
            break;
        }
    }
    return ans;
}

int main()
{
    string s = "abccbaacz";
    cout << repeatedCharacter(s);
    return 0;
}