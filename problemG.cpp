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

    ll n;
    cin >> n;
    ll k, s;
    cin >> k >> s;
    vector<ll> arr(n, 0);
    fr(i, n)
    {
        cin >> arr[i];
    }
    sort(all(arr));
    ll ans = -1;
    ll i = 0;
    while (i < n - s + 1)
    {
        ans = max(ans, arr[i + s - 1] - arr[i]);
        i += s;
    }
    cout << ans << endl;
}