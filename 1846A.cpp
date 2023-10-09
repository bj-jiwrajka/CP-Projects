// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
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
        vector<ll> v;

        ll n;
        cin >> n;
        ll mx = -1e9;
        ll cnt = 0;
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            if (x - y > 0)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}