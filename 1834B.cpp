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
        string a, b;
        cin >> a >> b;

        ll m = a.length();
        ll n = b.length();
        if (m > n)
        {
            string c = "";
            fr(i, m - n)
            {
                c += '0';
            }
            c += b;
            b = c;
        }
        else if (n > m)
        {
            string c = "";
            fr(i, n - m)
            {
                c += '0';
            }
            c += a;
            a = c;
        }
        ll i = 1;
        ll ans = 0;
        while (i < a.length() and a[i - 1] == b[i - 1])
        {
            ans += abs(a[i] - b[i]);
            i++;
        }
        if (i == 1)
            ans += abs(a[i - 1] - b[i - 1]);
        for (ll j = i; j < a.length(); j++)
        {
            ans += 9;
        }
        cout << ans << endl;
    }
}