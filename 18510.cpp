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
        ll m, k, h;
        cin >> m >> k >> h;
        vector<ll> ans;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        fr(i,m-1)
        {
            ans.push_back(h-(i+1)*k);
            ans.push_back(h+(i+1)*k);
        }
        ll cnt=0;
        fr(i,n)
        {
            if(find(ans.begin(),ans.end(),arr[i])!=ans.end())
            {
                            // cout<<arr[i]<<" ";

              cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}