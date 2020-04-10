#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {7,7, 3, 7,7};

    int left = 0, right = 0;
    int max1 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        left = (i) * (*max_element(arr, arr + i));
        right = ((n - i)) * (*max_element(arr + i, arr + n));
        cout << left << " " << right<< endl;
        max1 = min(left + right, max1);
    }

    cout << max1;
    return 0;
}