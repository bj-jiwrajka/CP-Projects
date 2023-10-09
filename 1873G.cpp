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
        string s;
        cin >> s;
        ll cnt = 0;
        for (auto it : s)
        {
            if (it == 'B')
                cnt++;
        }
        ll n = s.length();
        ll c = 1;
        vector<ll> v;
        fr(i, n - 1)
        {
            if (s[i] == 'A' and s[i + 1] == 'A')
                c++;
            else if (s[i] == 'A')
            {
                v.pb(c);
                c = 1;
            }
        }
        if (s[n - 1] == 'A')
            v.pb(c);
        ll ans = 0;
        ll i = 0;
        sort(v.rbegin(), v.rend());
        while (cnt-- and i < v.size())
        {
            ans += v[i];
            i++;
        }
        cout << ans << endl;
    }
}