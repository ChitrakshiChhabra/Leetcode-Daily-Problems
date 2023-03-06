#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0, end = n-1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] - (mid + 1) < k)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start + k;
    }

int main()
{
    vector <int> array = {2,3,4,7,11};
    cout << findKthPositive(array, 5);
    return 0;
}