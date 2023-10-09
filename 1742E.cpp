// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
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

        vector<ll> crr(n, 0);
        crr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            crr[i] = crr[i - 1] + arr[i];
        }
        vector<ll> drr(n, 0);
        drr[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            drr[i] = max(arr[i], drr[i - 1]);
        }
        int j = 0;
        ll ind = -1;

        while (m--)
        {
            ll key = brr[j];
            ll left = 0;
            ll right = n - 1;
            while (left <= right)
            {
                ll mid = left + (right - left) / 2;

                if (key < drr[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            j++;
            ind = left - 1;
            if (ind == -1)
                cout << 0 << " ";
            else
                cout << crr[ind] << " ";
        }
        cout << endl;
    }
}