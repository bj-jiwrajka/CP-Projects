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
    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    fr(i, n)
    {
        cin >> arr[i];
    }
    ll k;
    cin >> k;
    ll ans = 0;
    ll indi, indj;
    while(k--)
    {
        ll mx = -1e9;
        fr(i, n)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (arr[i] and arr[j])
                {
                    ll an = (arr[i] & arr[j]);
                    if (an >= mx)
                    {
                        mx = an;
                        indi = i;
                        indj = j;
                    }
                }
            }
        }
        arr[indi] = 0;
        arr[indj] = 0;
        ans = ans + ((k) * mx);
    }
    cout << ans << endl;
}