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
        vector<ll> prime={2,3,5,7,11,13,17,19,23,29};
        ll ans=0;
        vector<ll> psbl;
        fr(i,1024)
        {
            ll temp=1;
            fr(j,10)
            {
                if(i&(1<<j))
                {
                    temp*=prime[j];
                }
            }
            psbl.pb(temp);
        }
       for(auto it:psbl)
       {
           cout<<it<<" ";
       }
       
    }
}