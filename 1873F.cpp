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

bool chk(vector<ll> &arr, vector<ll> &brr, ll len, ll k, vector<ll> &pref)
{
    ll n = arr.size();
    ll i = 0, j = len;
    bool valid = 1;
    for (j = 1; j < len; j++)
    {
        if (arr[j - 1] % arr[j])
            valid = 0;
    }
    while (j < n)
    {
        if (pref[j] - pref[i] <= k and valid)
            return true;
        j++;
        i++;
    }
    return false;
}
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
        // vector<ll> pref(n + 1, 0);

        // for (ll i = 0; i < n; i++)
        // {
        //     pref[i + 1] = pref[i] + arr[i];
        // }
        vector<ll> brr(n, 0);
        fr(i, n)
        {
            cin >> brr[i];
        }
        ll head = 0, tail = 0;
        ll mx = INT_MIN, sum = 0;
        if (n == 1)
        {
            if (arr[0] <= k)
                cout << 1 << endl;
            else
                cout << 0 << endl;
            continue;
        }
        // ll ans = 0;
        while (head < n)
        {
            if (head == 0)
            {
                sum += arr[head];
                if(sum<=k)
                mx = max(mx, head - tail + 1);
                head++;
                continue;
            }
            if (((brr[head - 1]) % (brr[head])) == 0)
            {
                sum += arr[head];
                while (tail < n and sum > k)
                {
                    sum -= arr[tail];
                    tail++;
                }
                mx = max(mx, head - tail + 1);
            }
            else
            {
                // mx = max(mx, head - tail );
                tail = head;
                sum = arr[tail];
            }
            if (sum <= k)
                mx = max(mx, head - tail + 1);
            head++;
        }
        if (mx == INT_MIN)
            cout << 0 << endl;
        else
            cout << mx << endl;
    }
}