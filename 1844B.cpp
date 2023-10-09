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
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;
        }
        if(n==4)
        {
            cout<<2<<" "<<1<<" "<<4<<" "<<3<<endl;
            continue;
        }
        vector<ll> v(n);
        if(n&1)
        {
            v[n/2]=1;
            v[0]=2;
            v[n-1]=3;
            for(int i=1;i<n/2;i++)
            {
                v[i]=i+1;
            }
            for(int i=n/2+1;i<n-1;i++)
            {
                v[i]=i+1;
            }
            if(n>5)
            v[2]=(n+1)/2;
            if(n>3)
            v[1]=n;
            for(auto i:v)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
                v[n/2-1]=1;
                v[0]=2;
                v[n-1]=3;
                for(int i=1;i<n/2-1;i++)
                {
                    v[i]=i+1;
                }
                for(int i=n/2;i<n-1;i++)
                {
                    v[i]=i+1;
                }
                if(n>6)
                v[2]=(n+1)/2;
                if(n>4)
                v[1]=n;
                for(auto i:v)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
        }
        
    }
}