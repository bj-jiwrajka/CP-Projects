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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }
        ll cnt=0;
        ll mx=-2e9-1;
        fr(i,n)
        {
            ll diff=arr[i]-brr[i];
            mx=max(diff,mx);
        }
        vector<ll> v;
        fr(i,n)
        {
            if(arr[i]-brr[i]==mx)
            {
                cnt++;
                v.pb(i+1);
            }
        }
        cout<<cnt<<endl;
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}