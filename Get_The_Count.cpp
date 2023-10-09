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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll l, r;
        cin >> l >> r;
        ll cnt = 0;
        fr(i, n)
        {
            ll lcm = arr[i];
            if (lcm >= l and lcm <= r)
            {
                cnt++;
            }
            for (ll j = i + 1; j < n; j++)
            {
                lcm = (lcm * arr[j]) / __gcd(lcm, arr[j]);
                if (lcm >= l and lcm <= r)
                {
                    cnt++;
                }
                else if (lcm > r)
                    break;
            }
        }
        cout << cnt << endl;
    }
}