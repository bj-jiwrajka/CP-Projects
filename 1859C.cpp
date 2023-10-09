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
        for (ll i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        ll mx = INT_MIN;
        fr(j, n)
        {
            for (ll i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            ll sum = 0;
            ll mixi = INT_MIN;
            reverse(arr.begin() + j, arr.end());
            fr(i, n)
            {
                sum += ((i + 1) * arr[i]);
                mixi = max(mixi, (i + 1) * arr[i]);
            }
            sum -= mixi;
            mx = max(mx, sum);
        }
        cout << mx << endl;
    }
}