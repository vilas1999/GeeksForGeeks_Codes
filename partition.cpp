#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int a, b;
    cin >> a >> b;
    int i = 0, j = 0, k = n - 1;
    //Your code here

    while (j<=k)
    {
        if (A[j] < a)
        {

            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            i++;
            j++;
        }
        else if (A[j] >= a && A[j] <= b)
        {

            j++;
        }
        else if (A[j] > b)
        {

            int temp = A[j];
            A[j] = A[k];
            A[k] = temp;
            k--;
        }

   
    }


    for(int i=0;i<n;i++) cout<< A[i] <<" ";
}