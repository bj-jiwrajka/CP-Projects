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
        ll n;
        cin >> n;
        ll q;
        cin >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long double m = (n * (n - 1));
        m *= (n - 2);
        m /= 6;
        ll tt = n - 2;
        ll zr = 0;
        ll cnt = 0;
        sort(all(v));
        ll sm = (tt * (tt + 1)) / 2;
        vector<ll> ab;
        ll summ = 0;
        while (summ < m)
        {
            summ += sm;
            ab.pb(summ);
            sm -= tt;
            tt--;
        }
        while (q--)
        {
            ll a;
            cin >> a;
            ll nn = lower_bound(all(ab), a) - ab.begin();
            cout << v[nn] << endl;
        }
    }
}