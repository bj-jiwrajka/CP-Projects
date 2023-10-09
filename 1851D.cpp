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
        vector<ll> arr(n - 1, 0);
        fr(i, n - 1)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            if (arr[0] == 2 or arr[0] == 1 or arr[0] == 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }
        ll cnt = 0;
        vector<ll> v;
        vector<ll> ex;
        vector<bool> vis(n + 1, 0);
        v.push_back(arr[0]);
        vis[arr[0]] = 1;
        fr(i, n - 2)
        {
            if ((arr[i + 1] - arr[i])<= n && !(vis[arr[i + 1] - arr[i]]))
            {
                v.pb(arr[i + 1] - arr[i]);
                vis[arr[i + 1] - arr[i]] = 1;
            }
            else
            {
                cnt++;
                ex.pb(arr[i + 1] - arr[i]);
            }
        }
        fr(i, v.size())
        {
            if (v[i] > n)
            {
                ex.pb(v[i]);
                cnt++;
            }
        }
        vector<ll> ms;
        for (ll i = 1; i <= n; i++)
        {
            if (find(v.begin(), v.end(), i) == v.end())
            {
                ms.pb(i);
            }
        }
        // cout<<cnt<<endl;
        if (cnt > 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (cnt == 0)
        {
            if (ms.size() == 1)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
            continue;
        }

        if (ms.size() > 2)
        {
            cout << "NO" << endl;
            continue;
        }

        if (cnt == 1)
        {
            if (ms[0] + ms[1] == ex[0])
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}