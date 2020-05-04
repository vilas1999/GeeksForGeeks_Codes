#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        int arr[26] = {0};
        for (int i = 0; i < n; i++)
            arr[s[i] - 'a']++;

        while (q--)
        {
            int c;
            cin >> c;
            int ans = 0;
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] > c)
                    ans += arr[i] - c;
            }
            cout << ans << endl;
        }
    }
    return 0;
}