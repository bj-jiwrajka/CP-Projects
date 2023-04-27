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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> v(n, 0);
        v[0] = abs(arr[0] - arr[1]);
        v[n - 1] = abs(arr[n - 1] - arr[n - 2]);

        for (int i = 1; i < n - 1; i++)
        {
            v[i] = max(abs(arr[i] - arr[i + 1]), abs(arr[i] - arr[i - 1]));
        }

        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
}