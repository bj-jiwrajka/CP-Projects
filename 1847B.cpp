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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        ll xr = arr[0];
        for (ll i = 1; i < n; i++)
        {
            xr &= arr[i];
            if (xr == 0)
            {
                cnt++;
                xr = arr[i + 1];
            }
        }
        if (xr == 0)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
}