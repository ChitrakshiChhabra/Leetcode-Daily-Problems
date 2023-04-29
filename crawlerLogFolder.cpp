#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<string> &logs)
{
    int i, count = 0;
    for (i = 0; i < logs.size(); i++)
    {
        if (logs[i] == "../" && count > 0)
            count--;
        else if (logs[i] != "./" && logs[i] != "../")
            count++;
    }
    return count;
}
int main()
{
    return 0;
}