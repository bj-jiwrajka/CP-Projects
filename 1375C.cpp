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
        ll ind;
        fr(i, n) if (arr[i] == mx) ind = i;
        if (ind == n - 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ll mn = mx;
        fr(i, ind)
        {
            if (arr[i] < mn)
            {
                mn = arr[i];
            }
        }
        ll mxi = *max_element(arr.begin() + ind + 1, arr.end());
        if (mn < mxi)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}