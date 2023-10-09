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
        vector<ll> arr(n - 1, 0);
        fr(i, n - 1)
        {
            cin >> arr[i];
        }
        vector<ll> ans(n, 0);
        ll i = 0;
        while (i < n - 1 and arr[i] >= arr[i + 1])
        {
            ans[i] = arr[i];
            i++;
        }
        if (i < n - 1)
        {
            ans[i] = arr[i];
            i++;
            ans[i] = 0;
            i++;
        }
        while (i < n)
        {
                ans[i] = arr[i - 1];
            i++;
        }
        fr(i, n)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}