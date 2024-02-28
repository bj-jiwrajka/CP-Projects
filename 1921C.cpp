// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
        ll f, a, b;
        cin >> f >> a >> b;
        vector<ll> arr(n);
        fr(i, n)
                cin >>
            arr[i];
        ll ans = arr[0];
        ll final= min(ans*a,b);

        for(ll i=1;i<n;i++)
        {
            ll ans=arr[i]-arr[i-1];
            final+=min(ans*a,b);
        }
        if(final<f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}