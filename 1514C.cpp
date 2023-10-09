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
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 1; i < n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            v.push_back(i);
        }
    }
    ll prod = 1;
    fr(i, v.size())
    {
        prod *= v[i];
        prod %= n;
    }
    if (prod == 1)
    {
        cout << v.size() << endl;
        fr(i, v.size())
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << v.size() - 1 << endl;
        fr(i, v.size() - 1)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}