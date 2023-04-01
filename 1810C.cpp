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
        ll n, c, r;
        cin >> n >> c >> r;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll newans = n * c + r;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        ll repeated = n - s.size();
        ll rep_cost = repeated * c;
        n = s.size();
        vector<ll> vc(s.begin(), s.end());
        sort(vc.begin(), vc.end());
        ll ans = 1e18;
        for (int i = 0; i < n; i++)
        {
            ll need_to_add = (vc[i] - i - 1) * r;
            ll need_to_rem = (n - i - 1) * c;
            ll minone;
            minone = need_to_add + need_to_rem;

            ans = min(ans, minone);
        }

        ll oldans = ans + rep_cost;
        cout << min(oldans, newans) << endl;
    }
}