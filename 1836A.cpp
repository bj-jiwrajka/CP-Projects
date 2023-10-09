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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        vector<ll> freq(101, 0);
        bool chk = 0;
        sort(all(arr));
        fr(i, n)
        {
            freq[arr[i]]++;
            fr(j, 101)
            {
                for (ll k = j + 1; k < 101; k++)
                {
                    if (freq[k] > freq[j])
                    {
                        chk = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
                if (chk)
                {
                    break;
                }
            }
            if (chk)
            {
                break;
            }
        }
        if (!chk)
        {
            cout << "YES" << endl;
        }
    }
}