#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, p;
        cin >> n >> p;
        int price[n], player[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> price[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> player[i];
        }

        int d = INT_MAX, f = INT_MAX;

        for (ll i = 0; i < n; i++)
        {
            if (player[i] == 0)
                d = min(price[i], d);

            if (player[i] == 1)
                f = min(price[i], f);
        }

        if (p + d + f <= 100)
            cout << "yes" << endl;
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}