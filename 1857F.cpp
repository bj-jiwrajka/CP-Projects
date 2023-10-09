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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll q;
        cin >> q;
        map<ll, ll> mp;
        fr(i, n)
        {
            mp[arr[i]]++;
        }
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            ll diff = x * x - 4 * y;
            if (diff < 0)
            {
                cout << 0 << " ";
                continue;
            }
            ll diffs = sqrt(diff);
            if ((diffs * diffs) != diff)
            {
                cout << 0 << " ";
                continue;
            }
            ll a, b;
            if (((x + diffs) % 2 != 0) or ((x - diffs) % 2 != 0))
            {
                cout << 0 << " ";
                continue;
            }
            a = (x + diffs) / 2;
            b = x - a;
            ll ans = 0;
            if (mp.count(a) and mp.count(b))
            {
                if (a == b)
                {
                    ans = (mp[a] * (mp[a] - 1)) / 2;
                }
                else
                    ans = mp[a] * mp[b];

                cout << ans << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}