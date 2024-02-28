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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    fr(i, n) cin >> arr[i];
    ll ans = 0;
    for (ll j = 0; j < 31; j++)
    {
        ll o = 0, e = 0;
        fr(i, n)
        {
            if (arr[i] & (1 << j))
                o++;
            else
                e++;
        }
        ans += (o * e);
    }
    ans *= 2;
    ans += n;
    for (ll i = ans; i >= 1; i--)
    {
        if (isPrime(i))
        {
            ans %= i;
            break;
        }
    }
    cout << ans << endl;
}
