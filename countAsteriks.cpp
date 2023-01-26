#include <iostream>
using namespace std;

int countAsterisks(string s)
{

    int count = 0, barCount = 0;
    for(auto a: s)
    {
        if(a == '*' && barCount%2 == 0)
            count+=1;
        if(a == '|')
            barCount+=1;
    }

    return count;
        
}

int main()
{
    string s = "l|*e*et|c**o|*de|";
    cout << countAsterisks(s);
    

    return 0;
}