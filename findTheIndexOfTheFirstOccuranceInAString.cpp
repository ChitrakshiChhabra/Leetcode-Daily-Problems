#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int p = 0, q = 0, r = 0;
    bool condition = false;
    while (p < haystack.size())
    {
        if (r == needle.size())
            return p;
        if (haystack[q] == needle[r])
        {
            condition = true;
            q++;
            r++;
        }
        else if (haystack[q] != needle[r] && condition == true)
        {
            p++;
            q = p;
            r = 0;
            condition = false;
        }
        else
        {
            p++;
            q++;
        }
    }
    return -1;
}

int main()
{
    string haystack = "sadbutsad", needle = "sad";
    cout << strStr(haystack, needle);
    return 0;
}