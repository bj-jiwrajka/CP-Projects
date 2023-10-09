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
        ll m;
        cin >> m;
        vector<string> arr(n);
        fr(i, n)
        {
            string s;
            cin >> s;
            arr[i] = s;
        }
        if (arr[0][0] == '1')
        {
            cout << -1 << endl;
            continue;
        }
        vector<vector<ll>> ans;
        ll cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (arr[i][j] == '1')
                {
                    cnt++;
                    if (j)
                        ans.pb({i + 1, j, i + 1, j + 1});
                    else
                        ans.pb({i, j + 1, i + 1, j + 1});
                }
            }
        }
        cout << cnt << endl;
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}