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
        ll s, p;
        cin >> s >> p;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<pair<ll, ll>> v;
        for (int i = 1; i <= n; i++)
        {
            v.pb({arr[i - 1], i});
        }
        vector<ll> v1, v2;
        sort(v.rbegin(), v.rend());
        ll j = s, k = p;
        fr(i, n)
        {
            if (j < k)
            {
                v1.pb(v[i].second);
                j += s;
            }
            else
            {
                v2.pb(v[i].second);
                k += p;
            }
        }
        cout << v1.size() << " ";
        for (auto it : v1)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << v2.size() << " ";
        for (auto it : v2)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}