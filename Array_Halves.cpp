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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        vector<int> v;
        vector<int> w;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > n)
            {
                v.push_back(i);
            }
        }
        for (int j = n; j < 2 * n; j++)
        {

            if (arr[j] <= n)
            {
                w.push_back(j);
            }
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans += w[i] - v[i];
        }
        cout << ans << endl;
    }
}