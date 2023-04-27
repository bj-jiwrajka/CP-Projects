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
        ll m;
        cin >> m;
        if (__gcd(m, n) == 1)
        {
            cout << 1 << endl;
            cout << n << " " << m << " " << endl;
        }
        else
        {
            cout << 2 << endl;
            if (__gcd(n + 1, m) == 1 and n+1 < 1e9)
            {
                cout << n + 1 << " " << m << " " << endl;
            }
            else if (__gcd(n - 1, m) == 1 and n-1>=0)
            {
                cout << n - 1 << " " << m << " " << endl;
            }
            else if (__gcd(n, m + 1) == 1 and m+1 <=1e9)
            {
                cout << n << " " << m + 1 << " " << endl;
            }
            else
            {
                cout << n << " " << m - 1 << " " << endl;
            }

            cout << n << " " << m << " " << endl;
        }
    }
}