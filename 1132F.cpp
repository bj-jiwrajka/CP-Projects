#include <bits/stdc++.h>
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
    string s;
    cin >> s;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][i] = 1;
    fr(i, n)
    {
        dp[i][k] = dp[i][k - 1] + 1;

        for (int k = i + 1; k < n; k++)
        {
            if (s[i] == s[k])
            {
                dp[i][k] = min(dp[i][k], dp[i + 1][k - 1] + dp[k][n - 1]);
            }
        }
    }
    cout << dp[0][n - 1] << endl;

    return 0;
}
