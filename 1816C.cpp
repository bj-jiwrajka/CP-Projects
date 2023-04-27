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
        vector<ll> v(n, 0);
        fr(i, n)
        {
            cin >> v[i];
        }
        vector<ll> diff(n - 1, 0);
        for (ll i = 0; i < n - 1; i++)
        {
            diff[i] = v[i + 1] - v[i];
        }
        ll cnt = 0;
        if (n & 1)
        {
            cout << "YES" << endl;
            continue;
        }
        fr(i, n - 1)
        {
            if (diff[i] < 0)
            {
                cout << "NO" << endl;
                cnt = 1;
                break;
            }
        }
        if (!cnt)
        {
            cout << "YES" << endl;
        }

        // else
        // {
        //     if (v[n - 1] < v[n - 2])
        //     {
        //         cout << "NO" << endl;
        //     }
        //     else
        //     {
        //         cout << "YES" << endl;
        //     }
        // }
    }
}

