#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    vector <int> map(256, -1);
    int left = 0, right = 0, n = s.size(), len = 0;
    while(right < n)
    {
        if(map[s[right]] != -1)left = max(map[s[right]] + 1, left);
        map[s[right]] = right;
        len = max(len, right - left + 1);
        right++;
    }
    return len;
        
}

int main()
{
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);

    return 0;
}