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
        sort(all(arr));
        ll i = 0;
        ll j = 0;
        ll s=0;
        for (ll i = n; i >=n-k; i--)
        {
            s+=arr[i-1];
        }
        ll d=0;
        fr(i,2*k)
        {
            d+=arr[i];
        }
        if()
        
        while (k--)
        {
            ll sm = arr[i + 0] + arr[i + 1];
            ll bg = arr[n - 1 - j];
            if (sm < bg)
            {
                i += 2;
            }
            else
            {
                j++;
            }
        }
        ll sum = 0;
        for (ll p = i; p < n - j; p++)
        {
            sum+=arr[p];
        }
        cout<<sum<<endl;
    }
}