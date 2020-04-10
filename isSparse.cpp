#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

bool isSparse(int n)
{

    // Your code
    int c = 0;
    int i = 1;
    while (n > 0)
    {
        if ((n & 1) == 0)
        {
            c = 0;
            cout << 0 << endl;
        }
        else if (n & 1 > 0 && c == 1)
        {
            cout << 2 << endl;

            return false;
        }
        else
        {
            c++;
            cout << 1 << endl;

        }

        n = n >> i;
    }

    return true;
}

int main()
{
    cout << isSparse(24) << endl;

    return 0;
}