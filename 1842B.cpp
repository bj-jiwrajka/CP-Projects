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
        ll x;
        cin >> x;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }
        vector<ll> crr(n, 0);
        fr(i, n)
        {
            cin >> crr[i];
        }
        if (x == 0)
        {
            cout << "Yes" << endl;
            continue;
        }
        bool chk = 0;
        ll ans = 0;
        fr(i, n)
        {
            if ((x | arr[i]) == x)
                ans = ans | arr[i];

            else
                break;
            if (ans == x)
            {
                cout << "Yes" << endl;
                chk = 1;
                break;
            }
        }
        if (!chk)
        {
            fr(i, n)
            {
                if ((x | brr[i]) == x)
                    ans = ans | brr[i];
                else
                    break;
                if (ans == x)
                {
                    cout << "Yes" << endl;
                    chk = 1;
                    break;
                }
            }
        }
        if (!chk)
        {
            fr(i, n)
            {
                if ((x | crr[i] )== x)
                    ans = ans | crr[i];
                else
                    break;
                if (ans == x)
                {
                    cout << "Yes" << endl;
                    chk = 1;
                    break;
                }
            }
        }
        // cout << ans << endl;
        // if (ans == x)
        //     cout << "Yes" << endl;
        // else
        if (!chk)
            cout << "No" << endl;
    }
}