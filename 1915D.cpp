// Name - Bijay Jiwrajka
// Scholar ID - 2112055
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
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
        string p = s;
        reverse(p.begin(), p.end());
        string ans="";
        for (ll i = 0; i < n; i++)
        {
            if (p[i] == 'b' or p[i] == 'c' or p[i] == 'd')
            {
                ans += p[i];
                ans += p[i + 1];
                ans += p[i + 2];
                ans += '.';
                i += 2;
            }
            else
            {
                ans += p[i];
                ans += p[i + 1];
                ans += '.';
                i += 1;
            }
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}