// // Name-Bijay Jiwrajka
// // Scholar id -2112055
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     long long int s;
//     cin >> n >> s;
//     int arr[n];
//     int brr[n];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> brr[i];
//     }
//     int cnt = 0;
//     int max =0;

//     int i=1;
//     while (s != 0)
//     {
//         arr[i] = brr[1];
//         i++;
//         s--;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[i] == brr[i])
//         {
//             cnt++;
//             if (cnt > max)
//             {
//                 max = cnt;
//             }
//         }
//         else
//         {
//             cnt = 0;
//         }
//     }
//     cout << max << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int f(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (int i = 4; i <= n; i++) {
        dp[i] = (1LL * dp[i - 1] * dp[i - 2] * dp[i - 3]) % MOD;
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

