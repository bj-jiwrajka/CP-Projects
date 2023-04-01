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
        // ll ans= (m/10)*10;
        // if (ans>=n and ans<=m)
        // {

        // cout<<ans<<endl;
        // }
        // else
        // {
        //     cout<<m<<endl;
        // }
        string q;
        ll max = INT_MIN;
        for (int i = n; i <= min(m,n+100); i++)
        {
            string s = to_string(i);
            ll len = s.size();
            string p = s;
            sort(s.begin(), s.end());
            ll ans = s[len - 1] - s[0];
            if (ans > max)
            {
                max = ans;
                q = p;
            }
        }

        cout << q << endl;
    }
}