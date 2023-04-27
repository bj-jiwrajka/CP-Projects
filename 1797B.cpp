// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        ll a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        ll cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != a[n - 1 - i][n - 1 - j])
                {
                    cnt++;
                }
            }
        }
        // cnt*=2;
        ll ab = 0;
        if (n & 1)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (a[n / 2][i] != a[n / 2][n - 1 - i])
                {
                    cnt++;
                }
            }

            if ((k - cnt) >= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        // cout << cnt << endl;
        // cnt*=2;
        else
        {

            if ((k - cnt) >= 0 and (k - cnt) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}