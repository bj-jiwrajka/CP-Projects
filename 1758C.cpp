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
        take(k);
        if (n % k)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<ll> v(n, 0);
            fr(i, n)
            {
                v[i] = i + 1;
            }
            v[0] = k;
            v[n - 1] = 1;
            if (n != k)
            {
                v[k - 1] = n;
            }
            ll ky = 0;
            for (int i = 1; i < n - 1; i++)
            {
                // if (v[i] / (i + 1) > 1)
                // {
                //     ll temp = v[i];
                //     v[i] = 2 * (i + 1);
                //     if ((2 * (i + 1) - 1 != n - 1))
                //     {
                //         if (temp % (2 * (i + 1)) == 0)
                //             v[2 * (i + 1) - 1] = temp;
                //         else v[i]=temp;
                //     }
                // }
                for (int i = 2; k<n; i++)
                {
                    while (n % (i * k) == 0)
                    {
                        v[k - 1] =i*k;
                        k=i*k;
                    }
                }
            }
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}