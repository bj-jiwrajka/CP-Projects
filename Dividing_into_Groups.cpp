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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (k > n)
        {
            cout << 0 << endl;
            continue;
        }
        if (k == 1)

        {
            ll sm = 0;
            fr(i, n)
            {
                sm += arr[i];
            }
            cout << sm << endl;
            continue;
        }
        sort(arr.rbegin(), arr.rend());
        if (n == k)
        {
            cout << arr[n - 1] << endl;
            continue;
        }

        ll sum = 0;
        for (ll i = k - 1; i < n - 1; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}
