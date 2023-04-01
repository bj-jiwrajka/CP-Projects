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

const int MAXN = 2e5+5;
const int MOD = 1e9+7;

ll n, m;
ll dp[MAXN][2];

int main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);
    cin >> n >> m;
    dp[0][0] = 1;
    dp[0][1] = 1;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j <= i; j++) {
            dp[j][i%2] = (dp[j][!(i%2)] + (j>0 ? dp[j-1][!(i%2)] : 0)) % m;
        }
    }

    for (ll j = 0; j <= n; j++) {
        cout << dp[j][n%2] << " ";
    }

    return 0;
}