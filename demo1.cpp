#include<bits/stdc++.h>
using namespace std;

int main()
{
     // Your code here

     string a = "10110";
     int n=5;
    long c = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        c++;
    }
    
    cout<< (n*n+1)/2;
    return 0;
}
