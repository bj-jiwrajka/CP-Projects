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
    string s = to_string(t);
    ll n = s.length();
    if (n == 1)
    {
        cout << t << endl;
        return 0;
    }
    ll mx = -1;
    fr(i, n)
    {
        ll prod = 1;

        fr(j, i)
        {
            prod *= s[j] - '0';
        }
        prod *= s[i] - '1';
        for (int j = i + 1; j < n; j++)
        {
            prod *= 9;
        }
        mx = max(mx, prod);
    }
    ll prod = 1;
    prod = pow(9, n - 1);
    ll prod2 = 1;
    fr(i, n)
    {
        prod2 *= s[i] - '0';
    }
    cout << max(mx, max(prod, prod2)) << endl;
}