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
        vector<int> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }
        ll a = 0, b = 0;
        ll cnt=0;
        fr(i,n)
        {
            if(arr[i]<0) cnt++;
        }
        if(cnt==n)
        {
            cout<<*max_element(all(arr))<<endl;
            continue;
        }
        fr(i, n)
        {
            if (i & 1)
            {
                if (arr[i] > 0)
                    a += arr[i];
            }
            else if (i % 2 == 0 and arr[i] > 0)
            {
                b += arr[i];
            }
        }
        ll sum = max(a, b);
        cout << sum << endl;
    }
}