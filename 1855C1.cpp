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
        ll mx = abs(*max_element(all(arr)));
        ll mn = abs(*min_element(all(arr)));
        ll mxind, mnind;
        fr(i, n)
        {
            if (arr[i] == mx)
            {
                mxind = i;
            }
            if (arr[i] == mn)
            {
                mnind = i;
            }
        }

        vector<pair<ll, ll>> vp;
        if (mx >= mn)
        {
            for (ll i = 0; i < n; i++)
            {
                arr[i] += mx;
                vp.pb({i, mxind});
            }
            for (ll i = n - 1; i >= 1; i--)
            {
                vp.pb({i, i - 1});
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                arr[i] += mn;
                vp.pb({i, mnind});
            }
            for (ll i = 1; i < n; i++)
            {
                vp.pb({i, i - 1});
            }
        }
        for(auto it:arr)

        {
            cout<<it<<" ";
        }
        cout<<endl;

        // cout << vp.size() << endl;
        // for (auto x : vp)
        // {
        //     cout << x.first + 1 << " " << x.second + 1 << endl;
        // }
    }
}