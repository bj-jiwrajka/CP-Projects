// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
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
        ll a, b, m, n;
        cin >> a >> b;
        cin >> n >> m;
        ll f = (n / (m + 1)) * (m * a) + (n % (m + 1)) * min(a, b);
        ll s = n * b;
        ll total_price = min(f, s);
        cout << total_price << endl;
    }
}