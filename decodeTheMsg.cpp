#include <iostream>
#include <map>

using namespace std;

int main()
{
    string key = "eljuxhpwnyrdgtqkviszcfmabo";
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    string answer;
    map <char, char> subsTable;
    int num = 97, count = 0;
    for(int i = 0; i < key.size(); i++)
    {
        if(key[i] == ' ')
            continue;
        if(subsTable.find(key[i]) == subsTable.end())
        {
            subsTable[key[i]] = char(num + count);
            count+=1;
        }
    }
    
    cout << endl << endl;
    
    for(auto a: message)
    {
        if(a == ' ')
            answer = answer + a;
        else
            answer = answer + subsTable[a];   
    }
    
    cout << answer << endl;
    
    return 0;
}