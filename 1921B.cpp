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
        string p, q;
        cin >> p >> q;
        ll a=0,b=0;
        for (ll i = 0; i < n; i++)
        {
            if (p[i] == '0' and q[i] == '1')
                a++;
            else if (p[i] == '1' and q[i] == '0')
                b++;
        }
        ll an=min(a,b);
        ll ans=an+max(a,b)-an;
        cout<<ans<<endl;
    }
}