#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = {'z', 'q', 'g', 'a', 'p', 'p', 'f', 'p', 'a', '\n'};

    int a[26] = {0};
    for (int i = 0; arr[i] != '\0'; i++)
    {
        a[arr[i] - 'a']++;
    }

    int k = 0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            arr[k++] = i + 'a';
        }
    }

    for (int i = 0; arr[i] != '\n'; i++)
        cout << arr[i] << " ";
}
