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
    ll n;
    cin >> n;
    vector<ll> brr(n);
    fr(i, n)
    {
        cin >> brr[i];
    }
    ll mn = 1e18;
    fr(i, n)
    {
        vector<ll> arr(brr);
        ll cnt = 0;
        arr[i] = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            ll key = arr[j + 1];
            ll p = key / arr[j];
            cnt++;
            if (p && arr[j])
            {
                while (arr[j] * p <= key)
                {
                    p++;
                }
                cnt += p - 1;
                arr[j] = arr[j] * p;
            }
        }
        // cout << cnt << endl;

        for (int j = i + 1; j < n; j++)
        {
            ll key = arr[j - 1];
            ll p = key / arr[j];
            cnt++;
            if (p && arr[j])
            {
                while (arr[j] * p <= key)
                {
                    p++;
                }
                cnt += p - 1;
                arr[j] = arr[j] * p;
            }
        }
        mn = min(mn, cnt);
    }
    cout << mn << endl;
}