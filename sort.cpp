#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = 1;

        long long arr1[n] = {arr[n]};

        for (int i = 0; i < n - k; i++)
        {
            if (arr[i] > arr[i + k])
                swap(arr[i], arr[i + k]);
        }

        if (flag)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}
