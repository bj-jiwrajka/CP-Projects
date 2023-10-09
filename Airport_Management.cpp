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
        int n;
        cin >> n;
        vector<int> at(n), dt(n);
        fr(i, n) cin >> at[i];
        fr(i, n) cin >> dt[i];
        sort(all(at));
        sort(all(dt));
         unordered_map<ll, ll> mp;
        ll cnt=1;
        fr(i, n)
        {
            // if(mp[at[i]]>=1) cnt++;
            // else if(mp[dt[i]]>=1) cnt++;
            mp[at[i]]++;
            mp[dt[i]]++;
        }
        ll mx=-1;
        for(auto it:mp)
        {
            mx=max(mx,it.second);
        }   
        cout<<mx<<endl;
    }
}