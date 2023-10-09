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
        ll k;
        cin >> k;
        string s;
        cin >> s;
        string p = "", q = "";
        if (k & 1)
        {
            fr(i, n)
            {
                if (i & 1)
                    p += s[i];
                else
                    q += s[i];
            }
            sort(all(p));
            sort(all(q));
            s = "";
            fr(i, n)
            {
                if (i & 1)
                    s += p[i / 2];
                else
                    s += q[i / 2];
            }
            // s += q[n / 2];
        }
        else
        {
            sort(all(s));
        }
        cout << s << endl;
    }
}