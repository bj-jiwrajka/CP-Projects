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
        string s;
        cin >> s;
        ll cnt = 0;
        vector<ll> v;
        fr(i, n)
        {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            {
                cnt++;
                v.pb(i);
            }
        }
        ll lo = cnt / k - 1;
        vector<ll> cn;
        ll ml = 1;
        while (lo--)
        {
            cn.pb(v[k * ml] - v[(k * ml) - 1]);
            ml++;
        }
        // cout<<v[v.size()-1]<<endl;
        ll ans = 1;
        // if(n - v[v.size() - 1]-1)
        // cn.pb(n - v[v.size() - 1]-1);
        // for(auto it:cn)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        fr(i, cn.size())
        {
            ans=(ans*(cn[i]))%md;
        }
        cout << ans % md << endl;
    }
}