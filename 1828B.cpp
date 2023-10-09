// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;

ll findGCD(vector<ll> arr, ll n)
{
    ll result = arr[0];
    for (int i = 1; i < n; i++)
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
        vector<ll> diff(n, 0);
        for (int i = 0; i < n; i++)
        {
            diff[i] = abs(arr[i] - i - 1);
        }
        cout << findGCD(diff, n) << endl;
    }
}