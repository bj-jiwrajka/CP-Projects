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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v(k, vector<ll>(n));
    fr(i, k)
    {
        fr(j, n)
        {
            cin >> v[i][j];
        }
    }
    int ans =1e9;
    for (ll u = 0; u < k; u++)
    {
        for (ll w = u + 1; w < k; w++)
        {
            int m = v[u].size();
            int n = v[w].size();
            vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
            for (int i = 0; i <= m; i++)
                dp[i][0] = 0;
            for (int j = 0; j <= n; j++)
                dp[0][j] = 0;
            for (int i = 1; i <= m; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (v[u][i - 1] == v[w][j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    else
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
            ans = min(ans, dp[m][n]);
        }
    }
    cout << ans << endl;
}