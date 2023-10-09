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
bool isPowerof2(ll n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
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
        if (isPowerof2(n))
        {
            cout << -1 << endl;
            continue;
        }
        if (n & 1)
            cout << 2 << endl;
        else
        {
            ll p = n;
            while (n % 2 == 0)
            {
                n /= 2;
            }
            if (n<=2e9 && n * (n + 1) / 2 <= p)
            {
                cout << n << endl;
            }
            else
                cout << 2 * (p / n) << endl;
        }
    }
}