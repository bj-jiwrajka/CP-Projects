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
    vector<ll> v;
    for (ll i = 2; i <= 1e3; i++)
    {
        ll sum = 1 + i + i * i;
        ll j = i * i * i;
        while (sum <=1e6)
        {
            v.push_back(sum);
            sum += j;
            j *= i;
        }
        v.push_back(sum);
    }
    while (t--)
    {
        ll n;
        cin >> n;

        if (find(v.begin(), v.end(), n) != v.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // n--;
        // ll x = sqrt(4 * n + 1) + 1;
        // x /= 2;
        // ll y = sqrt(4 * n + 1) - 1;
        // y /= 2;
        // cout<<x<<" "<<y<<" "<<x*y<<" "endl;
        // if (x * y == n)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}