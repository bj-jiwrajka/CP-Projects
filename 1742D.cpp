#include <bits/stdc++.h>
using namespace std;

#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()

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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }

        map<ll, ll> ind;
        for (int i = 0; i < 1001; i++)
        {
            ind[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            ind[arr[i]] = i + 1;
        }

        map<ll, ll> s;
        ll ans = -1;
        for (ll i = 1; i < 1001; i++)
        {
            for (ll j = 1; j < 1001; j++)
            {
                if (ind[i] && ind[j] && __gcd(i, j) == 1)
                {
                    ans = max(ind[i] + ind[j], ans);
                }
            }
        }
        cout << ans << endl;
    }
}
