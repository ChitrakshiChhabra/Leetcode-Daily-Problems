#include <iostream>
using namespace std;

bool halvesAreAlike(string s)
{
    int half = (s.size()) / 2, count_1 = 0, count_2 = 0;
    for (int i = 0; i < half; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            count_1 += 1;
    }

    for (int i = half; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            count_2 += 1;
    }
    if (count_1 == count_2)
        return true;
    return false;
}

int main()
{
    cout << halvesAreAlike("book") << endl;
    return 0;
}