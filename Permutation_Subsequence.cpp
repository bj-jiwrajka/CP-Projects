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
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt = 1;
        ll ans = 0;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        ll max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        for (int i = 1; i <= max; i++)
        {
            if (mp[i] == 0)
            {
                break;
            }

            cnt = (cnt *mp[i])%md;
            ans= (ans+cnt)%md;
        }

        cout << ans%md << endl;
    }
}