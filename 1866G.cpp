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
bool chk(ll mid, vector<ll> &v1, vector<ll> &v2)
{
    ll n = v1.size();
    ll key = 0;
    fr(i, n)
    {
        if (v2[i])
            v1[i] += key;
        if (v1[i] > mid)
        {
            if (!v2[i] or i==n-1)
                return false;
            key += (v[i] - mid);
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    vector<ll> vv(n, 0);
    fr(i, n)
    {
        cin >> v[i];
    }
    fr(i, n)
    {
        cin >> vv[i];
    }
    ll lo = 0, hi = 1e9;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (chk(mid))
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
}