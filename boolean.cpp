#include <bits/stdc++.h>
using namespace std;

const int SIZE = 10;

void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
    int ans[r][c] ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 1)
            {
                for (int k = 0; k < r; k++)
                    ans[k][j] = 1;
                for (int k = 0; k < c; k++)
                    ans[i][k] = 1;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    //Your  code here
}

int main()
{
    int c, r;
    cin >> r >> c;
    int arr[r][10];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    booleanMatrix(r,c,arr);
    return 0;
}
