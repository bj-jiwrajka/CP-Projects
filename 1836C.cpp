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
ll sum(ll n)
{
    ll a = pow(10, n - 1);
    ll b = pow(10, n) - 1;
    ll sm = 0;
    for (ll i = a; i <= b; i++)
    {
        sm += i;
    }
    return sm;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, k;
        cin >> a >> b >> c >> k;
        if (c != max(a, b) and c != max(a, b) + 1)
        {
            cout << -1 << endl;
            continue;
        }
        ll mx = max(a, b);
        ll mn = min(a, b);
        a = mn;
        b = mx;
        ll totadignum = pow(10, a - 1) * 9;
        ll totbdignum = pow(10, b - 1) * 9;
        ll prod = totadignum * totbdignum;
        ll sm = sum(a);
        ll totnos;
        if (a < b)
        {
            totnos = prod - sm;
            ll cnt = 1;
            ll cn = 1;
            if (k > totnos)
            {
                cout << -1 << endl;
                continue;
            }
            while (cnt < k)
            {
                /* code */
                cn++;
                cnt += cn;
            }
            // cnt -= cn;
            cout << cn << " "
                 << "+" << k - cnt << endl;
            continue;
        }
        else
        {
            if (a == c)
            {
                totnos = 9 * 9 * pow(10, a - 1) * pow(10, a - 1);
            }
            else
            {
                totnos = 9 * 9 * pow(10, a - 1) * pow(10, b - 1);
                ll cnt = 1;
                ll cn = pow(10, a - 1);
                if (k > totnos)
                {
                    cout << -1 << endl;
                    continue;
                }
                while (cnt < k)
                {
                    cn++;
                    cnt += cn;
                }
                cnt -= cn;
                ll lo = k - cnt;
                ll loo = 1;
                ll nm;
                while (lo--)
                {
                    nm = pow(10, b);
                    while (loo--)
                    {
                        nm--;
                    }
                    loo++;
                }

                cout << cn << " "
                     << "+"
                     << " " << nm << endl;
                continue;
            }
        }
        if (k > totnos)
        {
            cout << -1 << endl;
            continue;
        }
        ll cnt = 0;
        ll u = pow(10, a - 1);
        while (cnt < k)
        {
            cnt += totbdignum - u;
            u++;
        }
        u--;
        cnt -= totbdignum - u;
        cout << u << " "
             << "+" << k - cnt << endl;
    }
}
