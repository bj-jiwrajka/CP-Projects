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
        ll m;
        cin >> n;
        cin >> m;
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if ((x1 == 1 and y1 == 1) or (x1 == 1 and y1 == m) or (x1 == n and y1 == 1) or (x1 == n and y1 == m) or (x2 == 1 and y2 == 1) or (x2 == 1 and y2 == m) or (x2 == n and y2 == 1) or (x2 == n and y2 == m))
        {
            cout << 2 << endl;
        }
        else if (x1 == 1 or y1 == 1 or x1 == n or y1 == m or x2 == 1 or y2 == 1 or x2 == n or y2 == m)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 4 << endl;
        }
    }
}