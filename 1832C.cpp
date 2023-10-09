#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)         \
    for (auto &it : v) \
        cin >> it;
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
        vector<ll> a(n, 0);
        inp(a);
        n = unique(a.begin(), a.end()) - a.begin();
        ll cnt=0;
        fr(i,n)
        {
            if((i==0 or a[i]<a[i-1] and a[i]<a[i+1]) or (i==n-1 or a[i]>a[i-1] and a[i]>a[i+1]))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        

    }

    return 0;
}
