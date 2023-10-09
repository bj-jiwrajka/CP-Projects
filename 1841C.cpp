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
        string s;
        cin >> s;
        ll n = s.length();

        ll ind = -1;
        ll mxi=-1e18;
        fr(j, n)
        {
            char d=s[j];
            s[j] = 'E';
            vector<ll> v;
            ll sum = 0;
            ll highest = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'A')
                {
                    ll val = 1;
                    if (val < highest)
                        sum -= 1;
                    else
                        sum += 1;

                    v.pb(sum);
                    highest = max(highest, val);
                }
                else if (s[i] == 'B')
                {
                    ll val = 10;
                    if (val < highest)
                        sum -= 10;
                    else
                        sum += 10;

                    v.pb(sum);
                    highest = max(highest, val);
                }
                else if (s[i] == 'C')
                {

                    ll val = 100;
                    if (val < highest)
                        sum -= 100;
                    else
                        sum += 100;

                    v.pb(sum);
                    highest = max(highest, val);
                }
                else if (s[i] == 'D')
                {
                    ll val = 1000;
                    if (val < highest)
                        sum -= 1000;
                    else
                        sum += 1000;

                    v.pb(sum);
                    highest = max(highest, val);
                }
                else
                {
                    ll val = 10000;
                    if (val < highest)
                        sum -= 10000;
                    else
                        sum += 10000;

                    v.pb(sum);
                    highest = max(highest, val);
                }
                // cout<<sum<<endl;
            }
            s[j]=d;
            mxi=max(mxi,sum);
        }
        // ll mxdiff=-1e9;

        // fr(i,n-1)
        // {
        //     ll diff=v[i]-v[i+1];
        //     mxdiff=max(mxdiff,diff);
        // }
        // cout<<mxdiff<<endl;
        cout << mxi << endl;
    }
}