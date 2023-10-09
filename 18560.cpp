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
        ll ind = -1;
        for (ll i = n - 1; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                ind = i - 1;
                break;
            }
        }
        if (ind == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << *max_element(arr.begin(), arr.begin() + ind + 1) << endl;
        }
    }
}