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
        string s = "a", t = "a";
        ll n;
        cin >> n;
        ll sl = 1, tl = 1;

        while (n--)
        {
            ll m, k;
            cin >> m >> k;
            string ad;
            cin >> ad;
            sort(all(ad));
            int mt = 'a' - '0', ms = 'a' - '0', mins = 'a' - '0';
            char ne = ad[ad.length() - 1];
            int nu = ne - '0';
            if (m == 1)
            {
                sl += k * ad.length();
                ms = max(ms, nu);
                mins = min(mins, nu);
            }
            else
            {
                tl += k * ad.length();
                mt = max(mt, nu);
            }
            cout << mt << " " << ms << " " << sl << " " << tl << endl;

            if (mt <= mins and sl > tl)
                cout << "NO" << endl;
            else if (mt <= ms and sl >= tl)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}