#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n / k << endl;
        }

        else
        {
            cout << n / __gcd(n, k) << endl;
        }
    }
    return 0;
}