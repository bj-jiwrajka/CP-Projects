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
        ll cnt = 0;
        ll n = s.length();
        if (n == 1 and s[0] == '^')
        {
            cout << 1 << endl;
            continue;
        }

        if (s[0] == '_')
        {
            cnt++;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '_' and s[i - 1] != '^')
            {
                cnt++;
            }
        }
        if (s[n - 1] == '_')
        {
            cnt++;
        }
        cout << cnt << endl;
    }
}