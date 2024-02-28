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
        ll a,b,c,d,p,q,r,s;
        cin>>a>>b>>c>>d>>p>>q>>r>>s;
        ll ans=0;

        if(a==c)
        {
            ans=abs(b-d)*abs(q-s);
        }
        else if(a==p)
        {
            ans=abs(b-q)*abs(d-s);
        }
        else{
            ans=abs(b-s)*abs(d-q);
        }
        cout<<ans<<endl;
    }

}