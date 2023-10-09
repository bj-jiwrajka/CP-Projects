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
        ll k;
        cin >> k;
        vector<ll> arr(n);
        fr(i, n)
        {
            cin >> arr[i];
        }

        vector<ll> brr(n);
        fr(i, n)
        {
            cin >> brr[i];
        }
        map<ll, ll> mp;
        fr(i,n)
        {
            mp[arr[i]]=brr[i];
        }

        sort(all(brr));

        fr(i,n)
        {
            auto it=lower_bound(all(brr),mp[arr[i]]);
            arr[i]=brr[i];
        }
        ll i=0;
        ll sum=k;
        while (k>0)
        {
            if(arr[i]>=k)
            k-=brr[i];
            sum+=k;
            i++;
        }
        ll mx=*max_element(all(arr));
        if (mx>sum)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}