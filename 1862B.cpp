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
        vector<ll> v(n, 0);
        fr(i, n)
        {
            cin >> v[i];
        }
        vector<ll> ans;

        ans.pb(v[0]);
        // if (v[0] != 1)
        // {
        //     cout << 1 << " ";
        //     cout << v[1] << " ";
        // }
        // else
        // {
        //     cout << v[1] << " ";
        // }
        // for (ll i = 2; i < n; i++)
        // {
        //     cout << 1 << " " << v[i] << " ";
        // }
        for (ll i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1])
                ans.pb(v[i]);
            else
            {
                ans.pb(1);
                ans.pb(v[i]);
            }
        }
        cout << ans.size() << endl;
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}