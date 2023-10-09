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
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    fr(i, n)
    {
        cin >> arr[i];
    }
    vector<int> ind(n, 0);
    vector<pair<ll, ll>> vp;
    fr(i, n)
    {
        vp.push_back({arr[i], i});
    }
    sort(all(vp));
    reverse(all(vp));
    ll x = 0;
    ll ans = 0;
    fr(i, n)
    {
        ans += (vp[i].first * x) + 1;
        x++;
    }
    cout << ans << endl;
    fr(i, n)
    {
        cout << vp[i].second+1 << " ";
    }
    cout << endl;
}