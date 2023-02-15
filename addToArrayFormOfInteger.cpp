#include <iostream>
#include <vector>
using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    int carry = 0;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int value = k % 10 + num.at(i) + carry;
        num.at(i) = value % 10;
        carry = value / 10;
        k /= 10;
    }
    if (k > 0)
    {
        while (k > 0)
        {
            int value = k % 10 + carry;
            num.insert(num.begin(), value % 10);
            carry = value / 10;
            k /= 10;
        }
    }
    if (carry > 0)
        num.insert(num.begin(), carry);

    return num;
}

int main()
{
    vector <int> num = {1,2,0,0};
    num = addToArrayForm(num, 34);
    for(auto a: num)
        cout << a << " ";
    cout << endl;
    return 0;
}
