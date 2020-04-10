#include <iostream>
using namespace std;

int sub(int *arr, int n, int sum, int csum)
{
    cout << n << " " << sum << " " << csum << endl;
    if (csum > sum)
        return 0;
    if (n == 0 && csum == sum)
    {
        cout << 1 << endl;
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }

    return (sub(arr, n - 1, sum, csum) + sub(arr, n - 1, sum, csum + arr[n-1]));
}

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sub(arr, n , sum, 0);
    return 0;
}
