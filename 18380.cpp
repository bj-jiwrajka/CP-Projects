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
        bool chk = 0;
        ll ans;
        fr(i, n)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                chk = 1;
                ans = arr[i];
            }
        }
        if (!chk)
        {
            cout << *max_element(all(arr)) << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}