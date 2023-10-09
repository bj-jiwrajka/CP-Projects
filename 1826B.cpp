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
typedef long double lld;
bool isPal(vector<ll> arr, ll n)
{
    ll i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
            return 0;
        i++;
        j--;
    }
    return 1;
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
        ll c1 = 0, c0 = 0;
        fr(i, n)
        {
            if (arr[i] == 0)
                c0++;
            else if (arr[i] == 1)
                c1++;
        }
        if (isPal(arr, n))
        {
            cout << 0 << endl;
            continue;
        }

        ll ans = abs(arr[0] - arr[n - 1]);
        if (n == 1)
            cout
                << 0 << endl;
        else

            fr(i, n/2)
            {
            ans=__gcd(ans,abs(arr[i]-arr[n-i-1]));
            }
        cout << ans << endl;
    }
}
