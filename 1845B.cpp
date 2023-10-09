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
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        // ll x = abs(c - a);
        // // if(x<0)x=0;
        // ll y = abs(d - b);
        // if (y < 0)
        //     y = 0;
        // ll sm = x + y;
        // ll p = abs(e - a);
        // if (p < 0)
        //     p = 0;
        // ll q = abs(f - b);
        // if (q < 0)
        //     q = 0;
        // ll ms = p + q;

        ll sm = 0, ms = 0;
        if (d < b and f < b)
            sm = min(b - d, b - f);

        if (c < a and e < a)
        {
            ms = min(a - c, a - e);
        }

        if (d > b and f > b)
            sm = min(d - b, f - b) ;

        if (c > a and e > a)
        {
            ms = min(c - a, e - a);
        }
        cout << sm + ms +1<< endl;
    }
}