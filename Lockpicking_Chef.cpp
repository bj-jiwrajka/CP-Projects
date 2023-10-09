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
        ll m;
        cin >> m;
        string s, p;
        cin >> s >> p;
        ll final = INT_MAX;
        fr(i, n - m + 1)
        {
            ll ans = 0;
            for (ll j = i; j < i + m; j++)
            {
                ans += (min(abs(s[j] - p[j - i]), (10 - abs(s[j] - p[j - i]))));
            }
            final = min(final, ans);
        }
        cout << final << endl;
    }
}
