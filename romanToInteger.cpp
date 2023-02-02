#include <iostream>
#include <map>
using namespace std;

map<int, string> roman;
string ans = "";
void generate(int num)
{
    if (num == 0)
        return;
    int x = 0;
    for (auto i = roman.begin(); i != roman.end(); i++)
    {
        if (i->first <= num)
            x = i->first;
        else
            break;
    }
    int t = num / x;
    for (int i = 0; i < t; i++)
        ans += roman[x];
    generate(num % x);
}

string intToRoman(int num)
{
    roman[1] = "I";
    roman[4] = "IV";
    roman[5] = "V";
    roman[9] = "IX";
    roman[10] = "X";
    roman[40] = "XL";
    roman[50] = "L";
    roman[90] = "XC";
    roman[100] = "C";
    roman[400] = "CD";
    roman[500] = "D";
    roman[900] = "CM";
    roman[1000] = "M";
    generate(num);
    return ans;
}
int main()
{
    cout << intToRoman(1994);
    return 0;
}