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
        vector<ll> arr;
        arr.pb(1);
        for (ll i = 1; i < n; i++)
        {
            arr.pb(arr[i - 1] + i + 1);
        }
        ll ans = upper_bound(arr.begin(), arr.end(), n) - arr.begin();
        if (n == arr[ans - 1])
            cout << ans << endl;
        else
            cout << ans +1+ arr[ans] - n << endl;
    }
}