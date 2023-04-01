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
    ll n, m;
    cin >> n >> m;
    vector<ll> mp(n + 1, 0);
    ll prev = 0;
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        mp[x] += y;
        ll val = prev + mp[x];
        cout << val << endl;
        prev = val;
    }
}