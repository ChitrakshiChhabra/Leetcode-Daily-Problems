#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> findWords(vector<string> &words)
{
    string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
    map<char, int> m1, m2, m3;
    for (int i = 0; i < s1.size(); i++)
    {
        m1[s1[i]]++;
    }
    for (int i = 0; i < s3.size(); i++)
    {
        m3[s3[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        m2[s2[i]]++;
    }
    for (int i = 0; i < words.size(); i++)
    {
        string s = words[i];
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int c1 = 1, c2 = 1, c3 = 1;
        map<char, int> mm1 = m1, mm2 = m2, mm3 = m3;
        for (int j = 0; j < s.size(); j++)
        {
            if (mm1.find(s[j]) == mm1.end())
            {
                c1 = -1;
                break;
            }
        }
        for (int j = 0; j < s.size(); j++)
        {
            if (mm2.find(s[j]) == mm2.end())
            {
                c2 = -1;
                break;
            }
        }
        for (int j = 0; j < s.size(); j++)
        {
            if (mm3.find(s[j]) == mm3.end())
            {
                c3 = -1;
                break;
            }
        }
        if (c1 == -1 && c2 == -1 && c3 == -1)
        {
            words.erase(words.begin() + i);
            i--;
        }
    }
    return words;
}

int main()
{
    return 0;
}