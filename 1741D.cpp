// Let's begin
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
int rec(vector<ll> &arr, ll n, ll ind)
{
    if (n == 1)
        return 0;
    ll M = INT_MIN, m = INT_MAX;
    for (int j = ind; j < (ind + n); j++)
    {
        M = max(M, arr[j]);
        m = min(m, arr[j]);
    }
    if ((M - m) != (n - 1))
        return -1;
    ll left = rec(arr, n / 2, ind);
    ll right = rec(arr, n / 2, ind + n / 2);
    if(left==-1 or right==-1)
        return -1;
    if (arr[ind] < arr[ind + n / 2])
        return left + right;
    return left + 1 + right;
}
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
        ll ans = rec(arr, n, 0);
        cout << ans << endl;
    }
}