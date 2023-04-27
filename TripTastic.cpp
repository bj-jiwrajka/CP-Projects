#include <bits/stdc++.h>
#define int long long
// Let's begin
// #include<appiness.h>
#define md 1000000007
#define pb push_back
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
using namespace std;

const int inf = 1e15;
int T, n, m, K;
int matrix[1005][1005], sum[1005][1005], mn[1005][1005], mx[1005][1005];
int check(int mid)
{
    int res = inf;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int ii = max(1ll * 1, i - mid), jj = max(1ll * 1, j - mid), ni = min(n, i + mid), nj = min(m, j + mid);
            int tmp = sum[ni][nj] - sum[ii - 1][nj] - sum[ni][jj - 1] + sum[ii - 1][jj - 1];
            if (tmp >= K * matrix[i][j])
            {
                res = min(res, max({i - 1, n - i, j - 1, m - j}));
            }
        }
    }
    return res;
}
signed main()
{
    scanf("%lld", &T);
    while (T--)
    {
        cin>>n>>m>>K;
        int tot = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%lld", &matrix[i][j]);
                tot += matrix[i][j];
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i][j];
            }
        }
        if (tot < K + 1)
        {
           cout<<-1<<endl;
            continue;
        }
        bool loop = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] >= K + 1)
                {
                    cout << 0 << endl;
                    loop = 1;
                    break;
                }
            }
            if (loop)
            {
                break;
            }
        }
        // cout<<tot<<" "<<"hello"<<endl;
        if (!loop)
        {
            int l = 0, r = 1e6, ans = 0;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (check(mid) <= mid)
                {
                    ans = mid, r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            printf("%lld\n", ans);
        }
    }
    return 0;
}
