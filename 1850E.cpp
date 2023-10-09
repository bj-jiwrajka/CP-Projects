#include <bits/stdc++.h>
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
        ll c;
        cin >> c;
        vector<ll> arr(n, 0);
        ll s = 0;
        fr(i, n)
        {
            cin >> arr[i];
            s += arr[i];
        }
        long double andr = 0;
        fr(i, n)
        {
            andr += (arr[i] * arr[i]);
        }
        long double diff = c - andr;
        long double ldiff = diff * n;
        ldiff += ( s * s);
        ll ans = (sqrtl(ldiff)-s)/(2*n);
        cout<<ans<<endl;
    }
}
