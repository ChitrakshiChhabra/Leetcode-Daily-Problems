#include <iostream>
#include <map>
#include <vector>
using namespace std;

int totalFruit(vector<int> &fruits)
{

    int maximum = 1;
    int s = 0;
    map<int, int> basket;
    for (int i = 0; i < fruits.size(); ++i)
    {
        basket[fruits[i]]++;
        while (basket.size() > 2)
        {
            basket[fruits[s]]--;
            if (basket[fruits[s]] == 0)
                basket.erase(fruits[s]);
            s++;
        }
        maximum = max(maximum, i - s + 1);
    }
    return maximum;
}
int main()
{
    vector <int> fruits = {1,2,3,2,2};
    cout << totalFruit(fruits); 
    return 0;
}
