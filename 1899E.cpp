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
        ll mn = *min_element(all(arr));
        ll ind=0;
        fr(i, n)
        {
            if (arr[i] == mn)
            {
                ind = i;
                break;
            }
        }
        bool chk=0;
        for(ll i=ind+1;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                chk=1;
                break;
            }
        }
        if(chk)
        {
            cout<<-1<<endl;
        }
        else
        cout<<ind<<endl;
    }
}