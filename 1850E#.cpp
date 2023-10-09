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
#define all(x) (x).begin(), (x).end()
typedef long double lld;
using LL = __int128;
// #define LL __int128;

LL chk(ll mid, vector<ll> &v)
{
    LL an = 0;
    ll n = v.size();
    fr(i, n)
    {
        LL sm = v[i] + 2 * mid;
        an = an + (sm * sm);
    }
    return an;
}
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
        ll c;
        cin >> c;
        vector<ll> v(n, 0);
        fr(i, n)
        {
            cin >> v[i];
        }

        ll l = 0, r = 1e9;
        while (l < r)
        {
            ll mid = (r - l) / 2 + l;
            LL ans = chk(mid, v);
            if (ans >= c)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
}