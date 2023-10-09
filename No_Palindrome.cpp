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
        ll k;
        cin >> k;
        if (n - k < 2)
        {
            cout << 1 << endl;
            continue;
        }
        // if (k == 1)
        // {
        //     n -= 2;
        //     int ans;
        //     if (n % 2 == 0)
        //     {
        //         ans = n / 2;
        //         ans *= 3;
        //         cout << ans + 1 << endl;
        //     }
        //     else
        //     {
        //         ans = n / 2;
        //         ans *= 3;
        //         cout << ans + 2 << endl;
        //     }
        //     continue;
        // }
        int i = 2;
        while (k < (n - 1) / i)
        {
            i++;
        }
        cout << i << endl;
    }
}