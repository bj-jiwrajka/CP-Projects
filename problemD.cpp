// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<long long> a(n+1), dp(n+1);
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         dp[i] = a[i];
//     }
//     for (int i = 1; i < n; i++) {
//         for (int k = 1; k <= n-i; k++) {
//             int j = i + k;
//             long long score = a[j];
//             for (int l = 1; l < k; l++) {
//                 if (j + l <= n) {
//                     score += a[j + l];
//                 }
//             }
//             dp[j] = max(dp[j], dp[i] + score);
//         }
//     }
//     cout << dp[n] << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int N = 2005;
vector<long long> a(N);
long long memo[N];

long long dfs(int i) {
    if (i == a.size() - 1) {
        return a[i];
    }
    if (memo[i] != -1) {
        return memo[i];
    }
    long long max_score = 0;
    for (int k = 1; k <= a.size() - i - 1; k++) {
        int j = i + k;
        long long score = a[j];
        for (int l = 1; l < k; l++) {
            if (j + l < a.size()) {
                score += a[j + l];
            }
        }
        max_score = max(max_score, dfs(j) + score);
    }
    memo[i] = max_score;
    return max_score;
}

int main() {
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << dfs(0) << endl;
    return 0;
}
