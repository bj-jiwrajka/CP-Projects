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
        ll n;
        cin >> n;
        vector<ll> v;
        if (n & 1)
        {
            v.pb(n);
            n--;
            v.pb(n);
        }
        else
        {
            v.pb(n);
        }
        while (n != 1)
        {
            ll b = log2(n);
            ll c = pow(2, b);
            if (n == c)
            {
                c = pow(2, b - 1);
            }
            while (n % c)
            {
                c/= 2;
            }
            n-=c;
            v.pb(n);
            // n=m;
        }
        cout << v.size() << endl;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}