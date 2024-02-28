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
ll findGCD(vector<ll> &arr, ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}
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
        ll ans = findGCD(arr, n);
        ll k = 0;
        fr(i, n)
        {
            if (arr[i] == ans)
                k++;
        }
        if (k > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}