// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        sort(all(arr));
        set<ll> s;
        fr(i, n)
        {
            s.insert(arr[i]);
        }
        vector<ll> v;
        for (auto i : s)
        {
            v.pb(i);
        }
        ll ans = INT_MIN;
        for (ll i = 0, j = 0; i < v.size(); i++)
        {
            while (j < v.size() and abs(v[j] - v[i]) >= n)
            {
                j++;
            }
            ans = max(ans,  i - j + 1);
        }
        cout << ans << endl;
    }
}