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
                cin >>
            arr[i];
        ll ans = INT_MIN;

        for (ll k = 1; k < n; k++)
        {
            if (n % k)
                continue;
            vector<ll> v;
            ll sum = 0;
            ll c = 0;
            fr(j, n)
            {
                sum += arr[j];
                c++;
                if (c == k)
                {
                    v.pb(sum);
                    sum = 0;
                    c = 0;
                }
            }
            ll mn = *min_element(all(v));
            ll mx = *max_element(all(v));
            ans = max(ans, mx - mn);
        }

        cout << max(0LL, ans) << endl;
    }
}