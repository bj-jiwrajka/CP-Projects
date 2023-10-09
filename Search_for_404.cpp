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
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int count(string &s)
{
    ll n = s.length();
    ll ind = n;
    fr(i, n)
    {
        ll cnt = 0;
        ll jind;
        if (s[i] == '4')
        {
            ind = i;
            for (int j = ind + 1; j < n; j++)
            {
                if (s[j] == '4')
                {
                    jind = j;
                    break;
                }
            }
            ll zeros = jind - i - 1;
        }
    }
}

ll solve(string &s, ll ind)
{
    ll n = s.length();
    if (ind == n)
        return count(s);
    ll ans1 = 0;
    if (s[ind] == '*')
    {
        s[ind] = '0';
        ans1 += solve(s, ind + 1);
        s[ind] = '4';
        ans1 += solve(s, ind + 1);
        s[ind] = '*';
    }
    else
        solve(s, ind + 1);
    return ans1 + solve(s, ind + 1);
}
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
        ll ans = solve(s, 0);
        cout << ans << endl;
    }
}


