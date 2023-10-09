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
        bool chk=0;
        fr(i, n-1)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "0" << endl;
                chk=1;
                break;
            }
        }
        if(chk)continue;
        ll mn = 1e9;
        for (ll i = 0; i < n - 1; i++)
        {
            ll len = arr[i + 1] - arr[i];
            mn = min(mn, len);
        }
        cout << (mn / 2) + 1 << endl;
    }
}