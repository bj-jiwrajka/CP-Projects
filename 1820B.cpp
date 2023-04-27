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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        ll cnt = 0, max = 0;
        ll c1 = 0;
        fr(i, n)
        {
            if (s[i] == '1')
            {
                c1++;
            }
        }
        if (c1 == 0 or c1 == n)
        {
            cout << c1 * c1 << endl;
            continue;
        }
        string p = s + s;

        for (int i = 0; i < 2 * n - 1; i++)
        {
            if (p[i] == '1' and p[i + 1] == '1')
            {
                cnt++;
                if (cnt >= max)
                {
                    max = cnt;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        // cout << p << endl;

        // cout << max + 1 << endl;

        ll ans = 0;
        ll maxans = -1;
        for (ll i = 1, j = max + 1; i <= max + 1, j >= 1; i++, j--)
        {
            ans = i * j;
            if (ans > maxans)
            {
                maxans = ans;
            }
        }
        cout << maxans << endl;
    }
}
