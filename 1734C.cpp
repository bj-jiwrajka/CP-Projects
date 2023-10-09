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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;
        for (ll i = 1; i <= n; i++)
        {
            bool chk = 0;
            if (s[i - 1] == '0')
            {

                // if (v.empty())
                //     v.pb(i);
                fr(j, v.size())
                {
                    if (i % v[j] == 0)
                    {
                        v.pb(v[j]);
                        chk = 1;
                        break;
                    }
                }
                if (!chk)
                    v.pb(i);
            }
        }
        ll sum = 0;
        for (auto i : v)
            // sum += i;
            cout << i << " ";
        cout << sum << "\n";
    }
}
