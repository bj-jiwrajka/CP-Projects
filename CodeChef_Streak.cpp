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
        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }
        ll cnt=0,c=0;
        ll mxcnt=-1,mxc=-1;
        fr(i,n)
        {
                if(arr[i]>0) cnt++;
                else cnt=0;
                mxcnt=max(mxcnt,cnt);
        }

        fr(i,n)
        {
                if(brr[i]>0) c++;
                else c=0;
                mxc=max(mxc,c);
        }
        if (mxc>mxcnt)
        {
            cout<<"Addy"<<endl;
        }
        else if(mxc==mxcnt)
        {
            cout<<"Draw"<<endl;
        }
        else
        {
            cout<<"Om"<<endl;
        }
        
    }
}