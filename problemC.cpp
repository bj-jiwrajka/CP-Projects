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
const int N = 1005;

ll n, m;
ll arr[N][N], dp[N][N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // ll m, n;
    const int N = 1002;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> arr[i][j];
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            dp[i][j] = 1;
            if (j > 1 and arr[i][j - 1] <= arr[i][j])
            {
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + 1);
            }
            if (i > 1 and arr[i - 1][j] >= arr[i][j])
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + 1);
            }
            if (dp[i][j] >= ans)
            {
                ans = dp[i][j];
            }
        }
    }

    cout << ans + 1 << endl;

    return 0;
}