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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        sort(all(arr));
        ll i = 0;
        ll j = i + 1;
        ll chk = 0;
        while (i < n && j < n)
        {
            if (abs(arr[j] - arr[i]) == k)
            {
                cout << "YES" << endl;
                chk = 1;
                break;
            }
            else if (abs(arr[i]-arr[j])< k)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        if (!chk)
        {
            cout << "NO" << endl;
        }
    }
}