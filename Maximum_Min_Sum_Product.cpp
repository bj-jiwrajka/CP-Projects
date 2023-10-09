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
        ll ans = 0;
        fr(i, n)
        {
            ll sum = arr[i];
            ll mn=arr[i];
            ans = max(ans, sum * arr[i]);
            for (ll j = i + 1; j < n; j++)
            {
                sum += arr[j];
                mn = min(mn, arr[j]);
                ans = max(ans, sum * mn);
                // ans%=md;
            }
        }
        cout << ans%md << endl;
    }
}