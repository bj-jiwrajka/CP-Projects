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
vector<ll> vis(1000001, 0);
set<ll> adj[1000001];
ll cnt1 = 0, cnt = 0;
void dfs(int i)
{
    vis[i] = 1;
    cnt1++;
    for (auto it : adj[i])
    {
        if (!vis[it])
            dfs(it);
        cnt++;
    }
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
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
        fr(i, n)
        {
            ll x;
            cin >> x;
            adj[x].insert(i + 1);
            adj[i + 1].insert(x);
        }
        ll mx = 0;
        bool chk = 0;
        ll cyc = 0;

        for (int i = 1; i <= n; i++)
        {
            cnt = 0, cnt1 = 0;
            if (!vis[i])
            {
                
                dfs(i);
                if (cnt1 == cnt / 2)
                {
                    cyc++;
                }

                mx++;
            }
            // cout<<adj[i].size()<<" ";
        }
        if(cyc==mx) cyc-=1;
        // cout<<endl;
        cout << cyc+1 << " " << mx << endl;
    }
}