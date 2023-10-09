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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> arr(2000001, 0);
    vector<ll> arr2;
    fr(i, n)
    {
        ll a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            arr[i]++;
        }
    }
    fr(i, q)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        for (int i = a; i <= b; i++)
        {
            if (arr[i] >= k)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}