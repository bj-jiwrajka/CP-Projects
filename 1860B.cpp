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
        ll m, k, a, b;
        cin >> m >> k >> a >> b;
        ll nu = m / k;
        ll an = nu * b;
        ll left;
        if (m - an <= b*k)
        {
            cout << 0 << endl;
        }
        else
        {
            left = m - an - b*k;
            ll mnn = k - (left % k);
            if (mnn >= a)
            {
                cout << (left / k) + (left % k) << endl;
            }
            else
            {
                cout << left / k + 1 << endl;
            }
        }
    }
}