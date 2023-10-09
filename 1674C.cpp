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
        string s, t;
        cin >> s >> t;
        ll n = s.length();
        if (t.length() == 1 and t[0] == 'a')
        {
            cout << 1 << endl;
            continue;
        }
        bool chk = 0;
        fr(i, t.length())
        {
            if (t[i] == 'a')
            {
                cout << -1 << endl;
                chk = 1;
                break;
            }
        }
        if (!chk)
            cout << static_cast<ll> (pow(2, n)) << endl;
    }
}