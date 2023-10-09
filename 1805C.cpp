// Let's begin
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
        ll m;
        cin >> m;
        vector<ll> arr(n, 0);
        ll i = 0;
        while (i < n)
        {
            cin >> arr[i];
            i++;
        }
        sort(all(arr));
        while (m--)
        {
            take(a);
            take(b);
            take(c);
            ll key =4*a*c;

            ll bb = upper_bound(all(arr), b) - arr.begin();
            
            if (bb>=0 and bb<n and (arr[bb]-b)*(arr[bb]-b) < key)
            {
                cout << "YES" << endl;
                cout << arr[bb] << endl;
            }
            else if (bb>=1 and bb<n+1 and (arr[bb - 1]-b)*(arr[bb - 1]-b) < key)
            {
                cout << "YES" << endl;
                cout << arr[bb - 1] << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        cout << " " << endl;
    }
}