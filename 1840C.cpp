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
        ll k, q;
        cin >> k >> q;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        ll ans = 0;
        fr(i, n)
        {
            if (arr[i] <= q)
                cnt++;
            else
            {
                if(cnt>=k)
                ans += (cnt - k + 1) * (cnt - k + 2) / 2;
                cnt = 0;
            }
            if (i == n - 1)
            {
                if(cnt>=k)
                ans += (cnt - k + 1) * (cnt - k + 2) / 2;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
}