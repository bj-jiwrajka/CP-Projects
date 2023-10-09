// JAI SHREE GANESH
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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 or n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
            return false;
    }
    return true;
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
        ll m;
        cin >> m;
        if (!isPrime(m))

        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << (j + 1) + m * (i) << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else if (!isPrime(n))
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m * n; j += n)
                {
                    cout << (j + 1) + i << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        else
        {
        
            ll x = 1, y = m + 1;
            for (int i = 0; i < (n + 1) / 2; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout<<x<<" ";
                    x++;
                }
                cout<<endl;
                x += m;
            }

            for (int i = (n + 1) / 2; i < n; i++)
            {
                fr(i,m)
                {
                    cout<<y<<" ";
                    y++;
                }
                cout<<endl;
                y += m;
            }
            cout << endl;
        }
    }
}