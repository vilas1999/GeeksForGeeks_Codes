#include <bits/stdc++.h>
using namespace std;

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
            cin >> arr[i];

        int mi = n, ma = 1;
        int s = 1;
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) <= 2)
                s++;
            else
            {
                mi = min(mi, s);
                s = 1;
            }

            ma = max(s, ma);
        }

        mi = min(s, mi);

        cout << mi << " " << ma << endl;
    }

    return 0;
}