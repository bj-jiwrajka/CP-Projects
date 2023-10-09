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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        if (n == 1)
        {
            int c2 = s[0];
            char d = c2 + 48;
            ans += d;
            cout << ans << endl;
            continue;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int a = s[i - 2] - '1'+1;
                int b = s[i - 1] - '1'+1;
                int c = a * 10 + b -1;
                char d = c + 'a';
                ans += d;
                s[i-1]='1';
                s[i-2]='1';
                i -= 2;
            }
            else
            {
                int cn = s[i];
                char c = cn + '1'-1;
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}