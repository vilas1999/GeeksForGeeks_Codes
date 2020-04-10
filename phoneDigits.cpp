#include <bits/stdc++.h>
using namespace std;

void possibleWords(int a[], int N, string s, int curr)
{

    string arr[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if (N == curr)
    {
        for (int i = 0; i < arr[a[N - 1] - 2].length(); i++)
        {

            cout << s + arr[a[curr - 1] - 2][i] << " ";
        }
        return;
    }

    for (int i = 0; i < arr[a[curr - 1] - 2].length(); i++)
    {
        //cout << curr << " " << a[curr - 1] << " " << arr[a[curr - 1] - 2] << endl;
        possibleWords(a, N, s + arr[a[curr - 1] - 2][i], curr + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    possibleWords(arr, n, "", 1);
}