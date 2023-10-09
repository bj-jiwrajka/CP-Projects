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
        vector<ll> ans;
        ll j = 1;
        ll r = n - 1;
        while (r >= 0)
        {
            while (r >= 0 and arr[r] < j)
            {
                r--;
            }

            if (r >= 0)
            {
                ans.pb(arr[r]);
                j = arr[r] + 1;
                r--;
            }
        }

        reverse(all(ans));
        // for (auto it : ans)
        // {
        //     cout << it << " ";
        // }
        bool chk = 0;
        ll kk = ans.size();
        fr(i, min(n, kk))
        {
            if (arr[i] != ans[i])
            {
                // chk = 1;
                break;
            }
        }
        ll end = n - 1;
        fr(i, n)
        {
            while (end >= 0 and arr[end] < i + 1)
                end--;
            if ((arr[i] - 1) != end)
            {
                chk = 1;
                break;
            }
        }
        if (!chk)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // number of elem grater than i
}