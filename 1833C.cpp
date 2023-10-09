#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)        \
    for (auto &e : v) \
        cin >> e;
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
        vector<ll> arr(n);
        inp(arr);

        vector<ll> o;
        vector<ll> e;

        fr(i, n)
        {
            if (arr[i] & 1)
            {
                o.push_back(arr[i]);
            }
            else
            {
                e.push_back(arr[i]);
            }
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        if (o.empty() || e.empty())
        {
            cout << "YES" << endl;
        }

        else
        {
            ll k = e[0];
            ll od = o[0];
            // cout << k << " " << od << " ";
            if (od > k)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
