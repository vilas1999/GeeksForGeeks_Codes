#include <bits/stdc++.h>
using namespace std;

int main()
{

    char str[] = {'o', 'u', 't', 'p', 'u', 't','\n'};
    int a[256];
    for (int i = 0; i < 256; i++)
        a[i] = 0;

    for (int i = 0; str[i] != '\n'; i++)
        a[str[i]]++;

    int max1 = 0;
    for (int i = 0; i < 256; i++)
    {
        if (a[i] > a[max1])
        {
            //cout<<1;
            max1 = i;
        }
    }

    //cout<<max1;
    cout << (char)max1 << endl;
}