#include <bits/stdc++.h>
using namespace std;

int checkmin(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
        arr[arr[i]++] = -arr[arr[i]++];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            return i + 1;
    }

    return n;
}

int mex(int *arr, int start, int end)
{
    if (start == end)
    {
        if (arr[start] == 1)
            return 2;
        else
            return 1;
    }


}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << mex(arr, 0, n - 1) << endl;
    }

    return 0;
}