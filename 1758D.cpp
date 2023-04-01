#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n / 2; i++)
            {
                cout << (n / 2) + i << " ";
            }
            for (ll i = 0; i < n / 2; i++)
            {
                cout << n + 1 + i << " ";
            }
            cout << endl;
        }
        else
        {
            ll s=(n+1)*(n+1);

            ll x = ((s - ((n + 1) * (n + 2)) / 2) / n) + 1;
            // cout << x << endl;
            for (ll i = 0; i < (n / 2); i++)
            {
                cout <<x+ i << " ";
            }
            for (ll i = n +x+ 1; i > x+(n / 2)+1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}