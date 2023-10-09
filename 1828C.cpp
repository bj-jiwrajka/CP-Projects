#include <bits/stdc++.h>
using namespace std;

#define md 1000000007
#define pb push_back
#define ll long long
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
        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }

        sort(brr.begin(), brr.end(), greater<ll>());
        sort(arr.begin(), arr.end());

        vector<ll> precomputed_cnt(n, 0);

        for (int i = 0; i < n; i++)
        {
            ll cnt = upper_bound(arr.begin(), arr.end(), brr[i]) - arr.begin();
            cnt = n - cnt - i;

            precomputed_cnt[i] = cnt;
        }
        ll sum = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            sum *= precomputed_cnt[i];
            sum %= md;
        }

        cout << sum << endl;
    }

    return 0;
}
