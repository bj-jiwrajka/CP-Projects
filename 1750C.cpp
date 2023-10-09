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
        string p, q;
        cin >> p >> q;
        bool chk = 0;
        fr(i, n)
        {
            if (p[i] == '1' and q[i] == '1' or p[i] == '0' and q[i] == '0')
            {
                chk = 1;
                break;
            }
        }
        if (chk and p != q)
        {
            cout << "NO" << endl;
        }
        else if (chk and p == q)
        {
            cout << "YES" << endl;
            vector<pair<ll, ll>> ans;
            ll cnt = 0;
            fr(i, n)
            {
                if (p[i] == '1')
                {
                    ll str = i;
                    while (i < n and p[i] == '1')
                    {
                        i++;
                    }
                    ans.pb({str + 1, i - 1});
                    cnt++;
                }
            }
            cout << cnt << endl;
            fr(i, cnt)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
        }
    }
}