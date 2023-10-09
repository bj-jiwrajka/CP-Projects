#include <bits/stdc++.h>
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll m;
        cin >> m;
        ll a=0,b=0;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
            a+=arr[i];
        }
        vector<ll> crr(m, 0);
        fr(i, m)
        {
            cin >> crr[i];
            b+=crr[i];
        }
        if(a>b)
        cout<<"Tsondu"<<endl;
        else if(a==b)
        cout<<"Draw"<<endl;
        else
        cout<<"Tenzing"<<endl;
    }
}