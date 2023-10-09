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
        ll n;
        cin >> n;
        ll d;
        cin >> d;
        ll cnt = 0;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll ans = m / d;
        ll j = 1;
        fr(i, n - 1)
        {
            if (arr[i + 1] - arr[i] > d)
                cnt++;
        }
        fr(i, n)
        {
            if (arr[i] - (-(arr[i] % d) + arr[i]) > d)
            {
                cnt++;
            }
        }
        cout << ans + n - cnt << " " << n - cnt << endl;
    }
}