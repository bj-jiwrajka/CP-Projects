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
        ll ans = 0, p;
        if (n == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                p = (arr[i + 1] - arr[i]) / 120;
                ans += p;
            }

            ans = ans + ((1439 - arr[n - 1]) / 120);

            if (ans >= 2)
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