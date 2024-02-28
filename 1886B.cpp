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
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        double aa = (a - c) * (a - c) + (b - d) * (b - d);
        aa = sqrt(aa);
        double bb = (a - e) * (a - e) + (b - f) * (b - f);
        bb = sqrt(bb);
        double cc = (c - e) * (c - e) + (d - f) * (d - f);
        cc = sqrt(cc);
        cc /= 2;
        double oa = c * c + d * d;
        oa = sqrt(oa);
        double ob = e * e + f * f;
        ob = sqrt(ob);

        if (oa <= ob and aa <= bb)
        {
            cout<<max(oa, aa) << endl;
        }
        else if (ob <= oa and bb <= aa)
        {
            cout<<max(ob, bb) << endl;
        }
        else if (oa <= ob and aa >= bb)
        {
            cout<<max(cc,max(oa, bb)) << endl;
        }
        else
        {
            cout<<max(cc,max(ob, aa)) << endl;
        }
    }
}