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
        ll k;
        cin >> k;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(all(arr));
        ll cnt=1;
        ll mx=-1e9;
        fr(i,n-1)
        {
            if(arr[i+1]-arr[i]<=k) cnt++;
            else cnt=1;
            mx=max(mx,cnt);
        }
        cout<<n-mx<<endl;
    }
}