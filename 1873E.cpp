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
        ll x;
        cin >> x;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll lo = 0, hi = INT_MAX;
        while (lo <= hi)
        {
            ll mid = hi - ((hi - lo) / 2);
            ll ans = 0;
            fr(i, n)
            {
                if (mid - arr[i] > 0)
                    ans += (mid - arr[i]);
            }
            if (ans <= x)
            {
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        cout << lo - 1 << endl;
    }
}