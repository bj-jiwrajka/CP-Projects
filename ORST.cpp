// Name - Bijay Jiwrajka
// Scholar ID - 2112055
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
        ll m;
        cin >> m;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<ll> brr(m, 0);
        fr(i, m)
        {
            cin >> brr[i];
        }
        ll mx = *max_element(all(brr));
        sort(arr.begin() + n - mx, arr.end());
        for (auto it : arr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}