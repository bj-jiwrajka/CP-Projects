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
        ll mx = *max_element(all(arr));
        ll cnt = 0;
        fr(i, n)
        {
            if (arr[i] == mx)
                cnt++;
        }
        if (n == cnt or cnt == 0)
        {
            cout << -1 << endl;
            continue;
        }
        cout << n - cnt << " " << cnt << endl;
        fr(i, n)
        {
            if (arr[i] != mx)
                cout << arr[i] << " ";
        }
        cout << endl;
        fr(i, cnt)
        {
            cout << mx << " ";
        }
        cout << endl;
    }
}