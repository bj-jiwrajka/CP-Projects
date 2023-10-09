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
        if (n & 1)
        {
            cout << "Yes" << endl;
            ll sum = n * (2 * n + 1);
            ll mid = sum / n;
            for (ll i = 0; i < (n / 2) + 1; i++)
            {
                cout << 1 + i << " " << mid - 1 - 2 * i << endl;
            }
            for (ll i = 0; i < n / 2; i++)
            {
                cout << 2 + n / 2 + i << " " << mid -2 - 2 * i << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
}