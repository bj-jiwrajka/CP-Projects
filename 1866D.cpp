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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll>> arr(n, vector<ll>(m, 0));
    vector<ll> v;

    fr(i, n)
    {
        fr(j, m)
        {
            cin >> arr[i][j];
            v.pb(arr[i][j]);
        }
    }
    sort(all(v));
    reverse(all(v));
    ll sum = 0;
    ll pp = m - k + 1;

    ll i = 0;
    // pp=min(pp,k);
    while (pp--)
    {
        sum += v[i];
        i++;
    }
    cout << sum << endl;
}