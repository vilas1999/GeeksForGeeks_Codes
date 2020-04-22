#include <bits/stdc++.h>
using namespace std;

long long int merge(long long int arr[], long long int s, long long int m, long long int e)
{
    long long int res = 0;
    long long int n1 = m - s + 1;
    long long int n2 = e - m;

    long long int left[n1], right[n2];

    for (long long int i = 0; i < n1; i++)
    {
        left[i] = arr[s + i];
    }

    for (long long int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }

    long long int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[s + k] = left[i];
            i++;
        }
        else
        {
            arr[s + k] = right[j];
            j++;
            res += (n1 - i);
        }
        k++;
    }

    while (i < n1)
    {
        arr[s + k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[s + k] = right[j];
        j++;
        k++;
    }

    return res;
}

long long int mergesort(long long int *arr, long long int s, long long int e)
{
    long long int res = 0;
    if (s < e)
    {
        long long int mid = (s + e) / 2;

        res += mergesort(arr, s, mid);
        res += mergesort(arr, mid + 1, e);

        res += merge(arr, s, mid, e);
    }

    return res;
}



long long int main()
{
    long long int n;
    cin >> n;

    long long int arr[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << mergesort(arr, 0, n - 1) << endl;

    
}