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
        ll c0 = 0;
        ll c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                c0++;
            }
            if (arr[i] == 1)
            {
                c1++;
            }
        }
        ll p = n - c0 - c1;

        if (c0 <= (n + 1) / 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (c1 > 0 and c1 + c0 == n)
            {
                cout << 2 << endl;
            }

            else
            {
                cout << 1 << endl;
            }
        }
    }
}