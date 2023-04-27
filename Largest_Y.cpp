#include <bits/stdc++.h>
using namespace std;
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
        ll n, x;
        cin >> n >> x;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (x <= 1e9)
        {

            ll ans = x;
            for (ll i = x; i >= 0; i--)
            {
                ll flag = 0;
                set<ll> s;
                for (ll j = 0; j < n; j++)
                {
                    s.insert(a[j] | i);
                    if (s.size() > 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                {
                    ans = i;
                    break;
                }
            }

            cout << ans << endl;
        }

        else
        {
            ll left = 0, right = x, ans = -1;
            while (left <= right)
            {
                ll mid = left + (right - left) / 2;
                vector<ll> b(n);
                for (ll i = 0; i < n; i++)
                {
                    b[i] = a[i] | mid;
                }
                bool found = false;
                set<ll> s;
                for (ll i = 0; i < b.size(); i++)
                {
                    s.insert(b[i]);
                }
                if (s.size() > 1)
                {
                    found = true;
                }
                if (found)
                {
                    ans = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}