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
        ll a, b;
        cin >> a >> b;
        if (a < b)
        {
            swap(a, b);
        }
        ll ans = 0;
        bool chk = 1;
        for (ll i = 31; i >= 0; i--)
        {
            if ((a & (1 << i)) and ((b & (1 << i)) == 0))
            {
                if (chk)
                {
                    chk = 0;
                }
                else
                    ans = ans | (1 << i);
            }
        }
        cout << ans << endl;
    }
}