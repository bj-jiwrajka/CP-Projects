#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = (k - 1) / (n - 1);
        if (n == k)
        {
            cout << n + 1 << endl;
        }
        else
        {

            cout << k + ans << endl;
        }
    }
    return 0;
}