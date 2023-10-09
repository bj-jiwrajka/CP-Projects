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
#define fr(i, n) for (ll i = 1; i <= n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
    void swap(ll &a, ll &b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ind = find(all(arr), 1) - arr.begin() + 1;
        ll ind2 = find(all(arr), 2) - arr.begin() + 1;
        ll indn= find(all(arr), n) - arr.begin() + 1;
        if (ind2 < ind)
        {
          swap(ind, ind2);
        }
        if(indn>=ind and indn<=ind2)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        else 
        {
            if(indn<ind)
            {
                cout<<indn<<" "<<ind<<endl;
            }
            else{
                cout<<ind2<<" "<<indn<<endl;
            }
        }

    }
}
