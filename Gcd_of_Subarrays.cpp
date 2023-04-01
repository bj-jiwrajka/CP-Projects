#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << endl;
        }
        else
        {

            ll ans =n*(n+1)/2;
            if (k < ans)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    cout << 1 << " ";
                }

                cout << k-ans+1 << endl;
            }
        }
    }
}