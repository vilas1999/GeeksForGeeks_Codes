#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n], pre[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
                pre[i] = pre[i - 1] * arr[i];
            else
                pre[i] = arr[i];
        }

        int s = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 1  ; j <= i; j++)
            {
                if (pre[j] == 0)
                {
                    cout << "Added" << i << " " << j << endl;
                    s++;
                }
                else if (i == j)
                {
                    if (arr[i] <= k)
                    {
                        cout << "Added" << i << " " << j << endl;

                        s++;
                    }
                }
                else
                {
                    if ((pre[i] / pre[j-1]) <= k)
                    {
                    cout<<"Added" <<i<<" " << j << endl;

                        s++;
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}