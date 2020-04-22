#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long m = 1000000007;
    while (t--)
    {
        long long n, a;
        cin >> n >> a;
        long long res = 0, mat = 0;
        for (int i = 1; i <= n; i++)
        {
            long long sum = (2 * i) - 1;
            long long p = (long long)(pow(a, sum));
            
            res += p % m;
            a = a * p;
        }

        cout << res % m << endl;
    }
    return 0;
}
