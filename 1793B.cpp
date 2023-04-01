// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll x, y;
//         cin >> x >> y;
//         ll n = x + y + 2;
//         cout << n << endl;
//         ll mid = (x - y) / 2;
//         for (ll i = mid - n / 2 + 1; i <= mid + n / 2; i++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

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
        ll x, y;
        cin >> x >> y;
        if (x * y < 0)
        {

            ll p = abs(x) + abs(y);
            cout << 2 * p << endl;
            for (int i = 0; i < abs(x); i++)
            {
                if (x > 0)
                {
                    cout << 1 << " " << 0 << " ";
                }
                else
                {
                    cout << -1 << " " << 0 << " ";
                }
            }

            for (int i = 0; i < abs(y); i++)
            {
                if (y > 0)
                {
                    cout << 1 << " " << 0 << " ";
                }
                else
                {
                    cout << -1 << " " << 0 << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << 2 * (x - y) << endl;
            for (int i = x - 1; i >= y; i--)
            {
                cout << i << " ";
            }
            for (int i = y + 1; i <= x; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}