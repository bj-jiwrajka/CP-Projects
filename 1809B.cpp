// #include <iostream>
// #include <cmath>

// using namespace std;

// typedef long long ll;

// bool check(ll n, ll d)
// {
//     ll x = sqrt(n);
//     ll y = (n + x) / (x + 1);
//     return x * y >= n - d * (x + y);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         n -= 1;
//         ll l = 0, r = sqrt(n) + 2;
//         while (l < r)
//         {
//             ll mid = (l + r) / 2;
//             if (check(n, mid))
//             {
//                 r = mid;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }

//         ll x = sqrt(n);
//         ll y = (n + x) / (x + 1);
//         ll cost = abs(x) + abs(y);

//         cout << cost / 2 << endl;
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
bool isSquare(ll x)
{
    ll y = sqrt(x);
    return y * y == x;
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
        // if (isSquare(n))
        // {
        //     cout << int(sqrt(n)) - 1 << endl;
        // }
        // else
        // {
        //     cout << int(sqrt(n)) << endl;
        // }

        cout<<int(sqrt(n-1))<<endl;
    }
}