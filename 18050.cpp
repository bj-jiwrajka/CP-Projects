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
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= arr[i];
        }

        ll brr[n];
        ll k=0;
        for (int i = 0; i < n; i++)
        {
            brr[i] = arr[i] ^ ans;
        }

        for (int i = 0; i < n; i++)
        {
            k ^= brr[i];
        }
        if (k == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}