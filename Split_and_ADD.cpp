#define ll long long
#define pb pb
class Solution
{
public:
    bool prime[1000010];
    int dp[1000010];
    ll ans;
    bool vis[1000010];
    vector<int> adj[1000010];

    void solvedfs(int u)
    {
        vis[u] = true;
        int sum = prime[u] ? 0 : 1;
        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if (!vis[v])
            {
                solvedfs(v);
                sum += dp[v];
            }
        }
        dp[u] = sum;
        if (prime[u])
            dp[u] = 0;
    }

    void dfs(int u, int p, int dv)
    {
        vis[u] = true;
        if (prime[u])
        {
            vector<ll> pp;
            ll sum = dv;
            pp.pb(dv);
            for (int i = 0; i < adj[u].size(); i++)
            {
                int v = adj[u][i];
                if (!vis[v] && v != p)
                {
                    dfs(v, u, 0);
                    pp.pb(dp[v]);
                    sum += dp[v];
                }
            }
            ll val = 0;
            for (int i = 0; i < pp.size(); i++)
            {
                val += (sum - pp[i]) * pp[i];
            }
            val /= 2;
            ans += val;
            ans += sum;
        }
        else
        {
            for (int i = 0; i < adj[u].size(); i++)
            {
                int v = adj[u][i];
                if (!vis[v] && v != p)
                {
                    dfs(v, u, dv + dp[u] - dp[v]);
                }
            }
        }
    }

    long long countPaths(int n, vector<vector<int>> &edges)
    {
        for (int i = 1; i <= 100000; i++)
        {
            prime[i] = true;
        }
        prime[1] = false;
        for (int i = 2; i * i <= 100000; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= 100000; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        assert(1 <= n && n <= 100000);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            u = edges[i][0];
            v = edges[i][1];
            assert(1 <= u && u <= n);
            assert(1 <= v && v <= n);
            adj[u].pb(v);
            adj[v].pb(u);
        }
        solvedfs(1);
        for (int i = 1; i <= n; i++)
            vis[i] = false;
        dfs(1, 0, 0);
        return ans;
    }
};
