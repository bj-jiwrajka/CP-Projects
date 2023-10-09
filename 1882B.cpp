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
        ll m;
        cin >> m;
        // set<ll> s;
        vector<vector<ll>> ans(100, vector<ll>(100, 0));
        map<ll, ll> mp;
        vector<ll> arr[m];
        fr(i, m)
        {
            ll x;
            cin >> x;
            arr[i].pb(x);
            for (ll j = 1; j <= arr[i][0]; j++)
            {
                ll x;
                cin >> x;
                arr[i].pb(x);
                mp[x]++;
            }

            for (ll j = 1; j <= x; j++)
            {
                for (ll k = 1; k <= x; k++)
                {
                    if (j != k)
                        ans[arr[i][j]][arr[i][k]]++;
                }
            }
        }

        // ll s = mp.size();
        // ll mn = INT_MAX;
        // for (ll i = 0; i < m; i++)
        // {
        //     map<ll, ll> mp2;
        //     for (int j = 1; j <= arr[i].size(); j++)
        //     {
        //         mp2[arr[i][j]]++;
        //     }
        //     // for(auto it:mp2) cout<<it.second<<" ";
        //     ll cnt = 0;
        //     for (auto it : mp2)
        //     {
        //         mp[it.first]--;
        //         if (mp[it.first] == 0)
        //             cnt++;
        //     }
        //     if (cnt)
        //         mn = min(mn, cnt);
        //     for (auto it : mp2)
        //     {
        //         mp[it.first]++;
        //     }
        // }
        ll final = 0;

        for (ll i = 1; i < 100; i++)
        {
            if (mp.count(i))
            {
                auto mp2 = mp;
                for (ll j = 1; j < 100; j++)
                {
                    if (!mp.count(j))
                        continue;
                    if (i != j)
                        mp2[j] -= ans[i][j];
                }
                ll cntt = 0;
                for (ll j = 1; j < 100; j++)
                    if (i != j and mp2[j] > 0)
                        cntt++;
                final = max(final, cntt);
            }
        }
        cout << final << endl;
        // cout << s - mn << endl;
        // cout << 1 << endl;
    }
}