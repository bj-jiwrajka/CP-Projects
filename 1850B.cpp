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
        ll ans=0;
        ll mn=-1e9;
        fr(i, n)
        {
            ll x, y;
            cin >> x >> y;
            if(x<=10 and y>mn)
            {
                mn=y;
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
}