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
        ll l;
        cin >> l;
        vector<ll> arr;
        while (n--)
        {
            /* code */
            ll x, y;
            cin >> x >> y;
            if (y == l)
            {
                arr.pb(x);
            }
        }
        if(arr.size()<k)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(arr.rbegin(), arr.rend());
        ll sum = 0;
        fr(i, k)
        {
            sum += arr[i];
        }
        if (sum)
            cout << sum << endl;
        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }
    }
}