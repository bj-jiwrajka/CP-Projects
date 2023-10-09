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
    ll q;
    cin >> q;

    map<ll, ll> arr;
    ll sum = 0;
    fr(i, n)
    {
        ll u;
        cin >> u;
        arr[i] = u;
        sum += u;
    }
    ll key = 0;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            ll a, b;
            cin >> a >> b;
            sum += b;
            if (arr[a - 1])
                sum -= arr[a - 1];
            else
                sum -= key;
            cout << sum << endl;
            arr[a - 1] = b;
        }
        else
        {
            ll m;
            cin >> m;
            key = m;
            sum = m * n;
            arr.clear();
            cout << sum << endl;
        }
    }
}