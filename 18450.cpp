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
        ll k, x;
        cin >> k >> x;
        if (k == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (x != 1)
        {
            cout << "YES" << endl;
            cout<<n<<endl;
            fr(i, n)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << "YES" << endl;
                cout<<n/2<<endl;
                fr(i, n / 2)
                {
                    cout << "2"
                         << " ";
                }
                cout << endl;
            }
            else
            {
                if (k == 2)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    fr(i, (n / 2) - 1)
                    {
                        cout << "2"
                             << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
}