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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll c=0;
        ll d=0;
        fr(i,n)
        {
            if(arr[i]>0) c++;
            else d++;
        }
        if(c%2==0 and c==d)cout<<0<<endl;
        else if(c&1 and c==d)cout<<1<<endl;
        else if(c!=d)
        {
            if(c>d and d&1)cout<<1<<endl;
            else if(c>d and d%2==0) cout<<0<<endl;
            else if(c<d)
            {
                ll ans=(d-c+1)/2;
                if(d&1 and ans%2==0) ans++;
                if(d%2==0 and ans&1) ans++;
                cout<<ans<<endl;
            }
        }
    }
}