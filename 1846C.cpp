// JAI SHREE GANESH
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define push_back push_back
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

        ll n, m, h;
        cin >> n >> m >> h;
        vector<vector<ll>> v(n, vector<ll>(m, 0));
        fr(i, n)
        {
            fr(j, m)
            {
                cin >> v[i][j];
            }
            sort(all(v[i]));
        }

        vector<pair<ll, pair<ll,ll>>> pinecode;
        fr(i, n)
        {
            ll ht = 0, ct = 0;
            ll th = 0;
            fr(j, m)
            {
                if (ht + v[i][j] <= h)
                {
                    ht += v[i][j];
                    th += ht;
                    ct++;
                }
                else
                    break;
            }
            pinecode.push_back({ct, {-th, -i}});
        }
        sort(all(pinecode), greater<pair<ll, pair<ll,ll>>>());
        ll ind = 0;
        for (auto x : pinecode)
        {
            ind++;
            if (x.second.second == 0)
            {
                cout << ind << endl;
                break;
            }
        }
    }
}