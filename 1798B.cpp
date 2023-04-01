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
        map<ll, ll> mp;
        vector<vector<int>> v(n);

        for (int j = 0; j < n; j++)
        {

            ll m;
            cin >> m;
            for (int i = 0; i < m; i++)
            {
                ll x;
                cin >> x;
                mp[x]++;
                v[j].push_back(x);
            }
        }
        vector<ll> ans;

        for (int j = 0; j < n; j++)
        {
            for (auto it : v[j])
            {
                if (mp[it] == 1)
                {
                    ans.push_back(it);
                    break;
                }
            }
            for (auto it : v[j])
            {
                mp[it]--;
            }
        }

        if (ans.size() < n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
        cout << endl;

        }
    }
}