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
        string a, b;
        cin >> a >> b;
        ll i = 0;
        ll cnt = 0;
        bool chk = 0;
        string p = b;
        reverse(p.begin(), p.end());
        ll d = 0, c = 0;
        fr(i, n)
        {
            if (a[i] != b[i])
                c++;
        }
        if (c == 0)
        {
            cout << 0 << endl;
            continue;
        }
        fr(i, n)
        {
            if (a[i] != p[i])
                d++;
        }
        if (d == 0)
        {
            cout << 2 << endl;
            continue;
        }
        ll ans = 2 * c;
        ll ans2 = 2 * d - 1;
        if (c & 1)
            ans--;
        if (d & 1)
            ans2++;
        cout << min(ans, ans2) << endl;
    }
}