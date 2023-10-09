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
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        ll g;
        cin >> g;
        ll coins = k * g;
        ll odd = (g + 1) / 2;
        ll mx = odd - 1;
        ll spent = mx * (n - 1);
        ll left = coins - spent;
        ll ans = left % g;
        ll recieved = 0;
        if (ans >= odd)
        {
            recieved = left - ans + g;
        }
        else
        {
            recieved = left - ans;
        }
        cout<<min(coins,coins-recieved)<<endl;
    }
}