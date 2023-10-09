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

const ll N = 2000089;
vector<ll> g[N];
vector<ll> numl(N, 0);

ll dfs(ll node, ll pr)
{
    ll cnt = 0;
    for (ll it : g[node])
    {
        if (it != pr)
        {
            cnt += dfs(it, node);
        }
    }
    if (node != 1 and g[node].size() == 1)
        cnt++;
    return numl[node] = cnt;
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

        for (ll i = 1; i <= n; i++)
        {
            g[i].clear();
            numl[i] = 0;
        }

        for (ll i = 1; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }

        numl[1] = dfs(1, 0);
        ll q;
        cin >> q;
        while (q--)
        {
            ll ans = 1;
            ll x, y;
            cin >> x >> y;
            ans = numl[x] * numl[y];
            cout << ans << endl;
        }
    }
}