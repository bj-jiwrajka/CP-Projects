// Let's begin
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
        fr(i, n)
        {
            cin >> arr[i];
        }

        vector<ll> str(n, 0);
        fr(i, n)
        {
            ll cn = 0;
            ll st = i + 1;
            while (st % 2 == 0)
            {
                cn++;
                st /= 2;
            }
            str[i] = cn;
        }

        ll cnt = 0;
        fr(i, n)
        {
            while (arr[i] % 2 == 0)
            {
                cnt++;
                arr[i] /= 2;
            }
        }
        // cout<<cnt<<endl;

        sort(all(str));
        reverse(all(str));
        ll sm = accumulate(all(str), 0);
        if (cnt + sm < n)
        {
            cout << -1 << endl;
            continue;
        }
        if (cnt >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ky = n - cnt;
            ll ans = 0;
            ll i = 0;
            while (i < n and str[i] < ky)
            {
                ans++;
                ky -= str[i];
                i++;
            }
            cout << ans + 1 << endl;
        }
    }
}