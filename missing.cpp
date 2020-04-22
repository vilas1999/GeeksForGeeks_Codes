#include <bits/stdc++.h>
using namespace std;

bool checkRotatedAndSorted(int arr[], int n)
{

    int flag = 0, inc = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            if (flag)
            {
                cout << 1;
                return false;
            }
            flag = 1;
        }

        if (arr[i] > arr[i - 1])
        {
            if (flag)
            {
                cout << 1;
                return false;
            }
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return false;
    }
    if (flag == 1 && arr[0] < arr[n - 1])
    {
        return true;
    }
    else
    {
        return false;
    }
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

    cout << checkRotatedAndSorted(arr, n);
    return 0;
}