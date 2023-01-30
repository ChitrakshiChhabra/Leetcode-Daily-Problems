#include <iostream>
using namespace std;

int pivotInteger(int n) {
    int startSum = 0, endSum = n, startVal = 0;
    while(true)
    {
        if((startSum == endSum && startVal == n) || n < 0) break;
        startVal+=1;
        startSum+=startVal;
        if(startSum > endSum)
        {
            endSum+=(n - 1);
            n-=1;
        }
    }
        
    return n;
        
}
int main()
{
    cout << pivotInteger(8);
    return 0;
}