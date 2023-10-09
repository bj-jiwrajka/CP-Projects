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
        ll b, h;
        cin >> b >> h;
        double sum = (n * b * h) / 2.0;
        vector<ll> ans;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            ll x;
            cin >> x;
            arr[i] = x;
            if (i && x - arr[i - 1] < h)
            {
                ans.push_back(h - (x - arr[i - 1]));
            }
        }
        double sub = 0.0;
        for (auto x : ans)
        {
            sub += (x * x * b);
        }
        sub /= (h * 2.0);
        double ans2 = sum - sub;
        cout << fixed << setprecision(15) << ans2 << endl;
    }
    return 0;
}
