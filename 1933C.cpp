// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
ll power(ll x, ll y)
{
    ll ans = pow(x, y) + 0.001;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        ll k = 0;
        set<ll> s;
        ll ans =0, x=1;
        // for (ll i = 0; i <= log2(a) ; i++)
        // {
        //     for (ll j = 0; j <= log2(b); j++)
        //     {
        //         ll x = power(a, i) * power(b, j);
        //         if (x % l == 0)
        //         {
        //             s.insert(x);
        //         }
        //     }
        // }
        map<ll, ll> mp;
        while (1)
        {
            if (l % x)
                break;
            ll y = l / x;
            mp[y]++;
            while (y % b == 0)
            {
                y /= b;
                ans++;
                mp[y]++;
            }
            x *= a;
        }
        cout << mp.size() << endl;
    }
}