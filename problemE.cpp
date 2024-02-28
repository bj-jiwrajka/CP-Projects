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

        vector<ll> arr(n);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll chk = 0;
        fr(i, n)
        {
            if (arr[i] & 1)
            {
                chk = 1;
                break;
            }
        }
        ll sum = 0;
        fr(i, n)
        {
            sum += arr[i];
        }
        if (!(sum&1) and chk)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}