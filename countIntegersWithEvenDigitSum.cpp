#include <iostream>
using namespace std;
int countEven(int num)
{
    long long int c = 0;
    for (int i = 1; i <= num; i++)
    {
        long long int j = i, ans = 0;
        while (j > 0)
        {
            ans += j % 10;
            j = j / 10;
        }
        if (ans % 2 == 0)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    cout << countEven(4) << endl;
    return 0;
}