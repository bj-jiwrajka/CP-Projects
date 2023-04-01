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
        ll k;
        cin >> k;
        if (k >= -(n-1) and k <= n + 1)
        {

            if (k > 0)
            {
                for (int i = 0; i < n - k + 1; i++)
                {
                    cout << "*";
                }
                for (int i = 0; i < k - 1; i++)
                {
                    cout << "+";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < n + k - 1; i++)
                {
                    cout << "*";
                }
                for (int i = 0; i < 1 - k; i++)
                {
                    cout << "-";
                }
                cout << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}