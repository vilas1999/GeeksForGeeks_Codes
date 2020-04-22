#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int circularSubarraySum(int arr[], int num)
{

    int min1, sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }

    int l = min(arr[0], 0);
    min1 = l;
    for (int i = 1; i < num; i++)
    {
        l = max(arr[i] + l, arr[i]);
        min1 = max(l, min1);
    }
    cout << min1 << endl;
    return sum + min1;
    // your code here
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << circularSubarraySum(arr,n) << endl;
}