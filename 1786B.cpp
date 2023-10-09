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
        ll a, b;
        cin >> a >> b;

        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }

        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }
        ll diff = arr[0] - brr[0] - a + b;
        fr(i, n)
        {
            brr[i] += diff;
        }
        int chk = 0;
        for (int i = 0; i < n; i++)
        {
            if ((brr[i] - b < arr[i] - a) || (brr[i] + b > arr[i] + a))
            {
                // cout << "NO" << endl;
                chk++;
                break; 
            }
        }

        fr(i, n)
        {
            brr[i] -= diff;
        }
        diff = arr[n - 1] - brr[n - 1] + a - b;
        fr(i, n)
        {
            brr[i] += diff;
        }
        for (int i = 0; i < n; i++)
        {
            if ((brr[i] - b < arr[i] - a) || brr[i] + b > arr[i] + a)
            {
                // cout << "NO" << endl;
                chk++;
                break;
            }
        }

        if (chk == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}