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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        set<ll> s;
        fr(i, n)
        {
            s.insert(arr[i]);
        }
        vector<ll> v;
        for (auto i : s)
        {
            v.pb(i);
        }
        if (v.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (v.size() == 2)
        {
            cout << 2*(v[1] - v[0]) << endl;
            continue;
        }

        ll mx = v[v.size() - 1];
        ll mn = v[0];
        cout << max(abs(mx - mn) + abs(mn - v[1]), abs(mx - mn) + abs(mx - v[v.size() - 2])) << endl;
    }
}