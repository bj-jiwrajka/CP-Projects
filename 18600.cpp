// JAI SHREE GANESH
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
        string s;
        cin >> s;
        ll n = s.length();
        ll o = 0, c = 0;
        fr(i, n)
        {
            if (s[i] == '(')
                o++;
            else
                c++;
        }
        ll m = 2 * n;
        string ans = "";
        fr(i, n)
        {
            ans += '(';
            ans += ')';
        }
        bool chk = 0;
        fr(i, m)
        {
            if (ans.substr(i, n) == s)
            {
                chk = 1;
                break;
            }
        }
        if (!chk)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
      
        else
        {
            chk=0;
            ans = "";
            fr(i, n)
            {
                ans += '(';
            }
            fr(i, n)
            {
                ans += ')';
            }
            fr(i, m)
            {
                if (ans.substr(i, n) == s)
                {
                    chk = 1;
                    break;
                }
            }
            if (!chk)
            {
                cout << "YES" << endl;
                cout << ans << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}