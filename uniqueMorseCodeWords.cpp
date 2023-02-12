#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{

    vector<string> hash = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    unordered_set<string> unique;
    for (int i = 0; i < words.size(); i++)
    {
        string temp = "";
        for (int j = 0; j < words[i].length(); j++)
        {
            temp += hash[words[i][j] - 97];
        }
        unique.insert(temp);
    }
    return unique.size();
}

int main()
{
    vector <string> words = {"gin","zen","gig","msg"};
    cout << uniqueMorseRepresentations(words);
    return 0;
}