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
        ll x, y;
        cin >> x >> y;
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        arr[0] = x;
        arr[n - 1] = y;
        ll j = 1;
        for (ll i = n - 2; i > 0; i--)
        {
            arr[i] = arr[i + 1] - j;
            j++;
        }
        vector<ll> diff(n - 1, 0);
        fr(i, n - 1)
        {
            diff[i] = arr[i + 1] - arr[i];
        }
        bool chk = 0;
        fr(i, n - 2)
        {
            if (diff[i] <= diff[i + 1])
            {
                chk = 1;
                break;
            }
        }
        if (chk)
        {
            cout << -1 << endl;
            continue;
        }
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
    }
}