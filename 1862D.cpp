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
ll fact(ll n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
ll chk(ll n)
{
    return n * (n - 1) / 2;
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
        ll ans = 1;
        ll nu = 1;
        while (nu < n)
        {
            ans = (nu * (nu - 1)) / 2;
            nu++;
            if (ans == n)
                break;
        }
        cout << nu << endl;
    }
}