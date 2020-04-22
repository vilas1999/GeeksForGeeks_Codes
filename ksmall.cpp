/*
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    // Your code here
    int pivot = high;
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[pivot]);

    return i + 1;
}

int small(int *arr, int low, int high, int k)
{
    if (low <= high)
    {
        int pi = partition(arr, low, high);
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
        cout << endl << pi << endl;
        if (pi == k - 1)
            return arr[pi];
        if (pi < k - 1)
            return small(arr, pi + 1, high, k);
        else
            return small(arr, low, pi - 1, k);
    }
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int k;
        cin >> k;

        cout << small(arr, 0, n - 1, k) << endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    
    // Your code here
    int num = (rand() % (high - low + 1)) + low;
    int pivot = num;
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[pivot]);
    cout << i+1<< " " << pivot << endl;
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return i + 1;
}

void small(int *arr, int low, int high, int k)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        cout << endl
             << pi << endl;

        if (pi == k - 1)
        {
            cout << arr[pi] << endl;
            return;
        }
        if (pi < k - 1)
        {
            small(arr, pi + 1, high, k);
            return;
        }
        else
        {
            (small(arr, low, pi - 1, k));
            return;
        }
    }
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int k;
        cin >> k;

        small(arr, 0, n - 1, k);
    }
    return 0;
}