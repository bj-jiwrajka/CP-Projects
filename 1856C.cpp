#include <bits/stdc++.h>
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
        ll k;
        cin >> k;
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll ans;
        ll l = 0, r = 1e11;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            bool chkk = false;
            if (*max_element(all(arr)) >= mid)
                chkk = true;
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    ll ct = 0, bnana = mid;
                    ct += bnana - arr[i];
                    bnana--;
                    bool chk = false;
                    for (int j = i + 1; j < n; j++)
                    {
                        if (arr[j] >= bnana)
                        {
                            chk = true;
                            break;
                        }
                        ct += bnana - arr[j];
                        bnana--;
                    }
                    if (chk && ct <= k)
                    {
                        chkk = true;
                        break;
                    }
                }
            }

            if (chkk)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
}
