#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n % 400 == 0)
        cout << "YES" << endl;
    else if (n % 100 == 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}