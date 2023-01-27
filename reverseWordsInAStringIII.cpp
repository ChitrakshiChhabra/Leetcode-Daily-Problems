#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
        string ans = "", word = "";


        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ' || i == s.size() - 1)
            {
                if(i == s.size() - 1)
                    word+=s[i];
                reverse(word.begin(), word.end());
                ans = ans + word;
                word = "";
                if(s[i] == ' ')
                    ans+=' ';
            }
            else
                word+=s[i];
        }
        return ans;
        
}

int main()
{
    cout << reverseWords("Let's take LeetCode contest");
    return 0;
}