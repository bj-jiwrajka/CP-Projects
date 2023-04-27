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
        if (n & 1 and n < 50)
        {
            cout << (50 - n) / 2 + 3 << endl;
        }
        else if (n % 2 == 0 and n < 50)
        {
            cout << (50 - n) / 2 << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << (n - 48) / 3 + 1 << endl;
            }
            else if (n % 3 == 1)
            {
                cout << (n - 49) / 3 + 3 << endl;
            }
            else
            {
                cout << (n - 50) / 3 << endl;
            }
        }
    }
}