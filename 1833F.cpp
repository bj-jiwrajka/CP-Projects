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
ll modpow(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y & 1)
        {
            res = (res * x) % md;
        }
        y >>= 1;
        x = (x * x) % md;
    }
    return res;
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
        ll m;
        cin >> m;

        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<ll, ll>> ap;
        for (auto II : mp)
        {
            ap.push_back(II);
        }

        sort(ap.begin(), ap.end());
        n = ap.size();
        vector<ll> pref(n);
        pref[0] = ap[0].second;
        for (int i = 1; i < n; i++)
        {
            pref[i] = (pref[i - 1] * ap[i].second) % md;
        }
        // fr(i,ns)
        // {
        //     cout<<pref[i]<<" ";
        // }
        ll ans = 0;
        ll cons = 0;
        for (int i = 0; i < n; i++)
        {
            cons++;
            cons = min(cons, m);
            if (cons == m)
            {
                ll khtm = i;
                ll suru = i + 1 - m;
                ll ad = pref[khtm];
                if (suru > 0)
                {
                    ad *= modpow(pref[suru - 1], md - 2ll);
                    ad %= md;
                }
                ans += ad;
                ans %= md;
            }
            if (i == n - 1 or ap[i + 1].first - ap[i].first != 1)
                cons = 0;
        }
        cout << ans << endl;
    }
}