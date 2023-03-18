#include <iostream>
#include <cmath>
using namespace std;
int countTriples(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int sq = (i * i) + (j * j);
            int r = sqrt(sq);
            if (r * r == sq && r <= n)
                c += 2;
        }
    }
    return c;
}
int main()
{
    cout << countTriples(5);
    return 0;
}