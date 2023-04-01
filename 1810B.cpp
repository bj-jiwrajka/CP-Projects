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
        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<ll> ans;
            while (n > 1)
            {
                n /= 2;
                if (n % 2)
                    ans.pb(2);
                else
                {
                    ans.pb(1);
                    n++;
                }
            }

            reverse(all(ans));
            cout << ans.size() << endl;
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}