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
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
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
        ll q;
        cin >> q;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll prefixSum[n];
        fillPrefixSum(arr, n, prefixSum);

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll lsum = 0;
            if (l >= 2)
            {
                lsum = prefixSum[l - 2];
            }

            ll rsum = prefixSum[n - 1] - prefixSum[r - 1];
            ll midsum = k * (r - l + 1);
            ll storeodd = lsum + rsum + midsum;
            // cout << lsum << " " << rsum << " " << midsum << endl;
            if (storeodd & 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}