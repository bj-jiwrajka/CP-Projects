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
        vector<ll> arr(n);
        ll sum = 0;
        bool chk = 0;
        fr(i, n)
        {
            cin >> arr[i];
            sum += arr[i];
            if (sum < 0)
                chk = 1;
        }
        ll f, e;
        if (n == 1)
        {
            if (arr[0])
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
            continue;
        }
        vector<ll> ans;
        fr(i, n)
        {
            if (arr[i] != 0)
            {
                f = i;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (arr[i] != 0)
            {
                e = i;
                break;
            }
        }
        for (int i = f; i <= e; i++)
        {
            ans.pb(arr[i]);
        }
        ll tsum = 0;
        for (ll i = ans.size() - 1; i > 0; i--)
        {
            tsum += ans[i];
            if (tsum >= 0)
            {
                chk = 1;
                break;
            }
        }

        // for (auto i : ans)
        //     cout << i << " ";
        // cout << endl;

        if (sum or chk)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}