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
        ll x;
        cin >> x;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        ll mn=arr[0],mx=arr[0];
        for (int i = 1; i < n; i++)
        {
            if(arr[i]<mn)
            mn=arr[i];
            if(arr[i]>mx)
            mx=arr[i];
            if(mx-mn>2*x)
            {
                cnt++;
                mn=arr[i];
                mx=arr[i];
            }
        }
        cout << cnt << endl;
    }
}