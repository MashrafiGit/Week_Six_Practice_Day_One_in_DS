#include <bits/stdc++.h>
using namespace std;

int getFourthLargest(int arr[], int n)
{
    if (n < 4)
        return INT_MIN;

    vector<int> v(arr, arr + n);

    sort(v.begin(), v.end(), greater<int>());

    return v[3];
}

int main()
{
    int arr[] = {1, 2, 2, 5};
    int n = 4;
    cout << getFourthLargest(arr, n) << endl;
}