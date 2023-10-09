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
        ll m;
        cin >> m;
        string a;
        string b;
        cin >> a >> b;
        ll i = 0, j = 0;
        bool chk = 0;
        while (i < n && j < m)
        {
            ll k = i;
            for (char u = a[j]; u <= b[j]; u++)
            {
                ll p = i;
                while (p < n and s[p] != u)
                {
                    p++;
                }

                k = max(k, p);
            }
            if (k == n)
            {
                cout << "YES" << endl;
                chk = 1;
                break;
            }
            j++;
            i = k + 1;
        }
        if (!chk)
        {
            if (j == m)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}