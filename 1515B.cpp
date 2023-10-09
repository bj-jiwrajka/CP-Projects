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
bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
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
        if (n & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        n /= 2;
        if (isPerfectSquare(n))
        {
            cout << "YES" << endl;
            continue;
        }
        if (n & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        n /= 2;
        if (isPerfectSquare(n))
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}