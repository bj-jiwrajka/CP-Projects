#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int sum = accumulate(v.begin(), v.end(), 0);
        pair<int, int> p;
        int ans;
        for (int i = 1; i <= q; i++)
        {
            cin >> p.first >> p.second;
            ans = p.second - p.first;
            if (ans % 2 == 0)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
