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
        ll k;
        cin >> k;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        if (k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (arr[0] == arr[n - 1])
        {
            ll cnt = 0;
            fr(i, n)
            {
                if (arr[i] == arr[0])
                    cnt++;
            }
            if (cnt >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll a = 0, b = 0;
            ll ind=0;
            fr(i, n)
            {
                if (arr[i] == arr[0])
                {
                    a++;
                }
                if (a == k)
                {
                    ind=i;
                    break;
                }
            }
            if(a<k)
            {
                cout<<"NO"<<endl;
                continue;
            }
            for(ll i=ind+1;i<n;i++)
            {
                if(arr[i]==arr[n-1]) b++;
            }
            if(b>=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}