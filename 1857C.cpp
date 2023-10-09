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
        ll n = m * (m - 1) / 2;

        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp;
        fr(i, n)
        {
            mp[arr[i]]++;
        }
        vector<ll> ans;
        ll cnt = m - 1;
        for (auto it : mp)
        {
            while (it.second > 0)
            {
                ans.pb(it.first);
                it.second -= cnt;
                cnt--;
                if (ans.size() == m)
                    break;
            }
        }
        fr(i, m - 1)
        {
            cout << ans[i] << " ";
        }
        cout << *max_element(ans.begin(), ans.end()) << endl;
        // cout << *max_element(ans.begin(), ans.end()) << endl;
    }
}