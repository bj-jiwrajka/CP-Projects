// Let's begin
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
        if (n == 1)
        {
            if (arr[0] == 1)
            {
                cout << "YES" << endl;
                cout << 1 << endl;
                cout << 1 << endl;
            }
            else
                cout << "NO" << endl;
            continue;
        }
        bool chk = 0;
        fr(i, n)
        {
            if (arr[i] == 1 or arr[i] > n)
            {
                cout << "NO" << endl;
                chk = 1;
                break;
            }
        }
        ll cnt = 0;
        fr(i, n)
        {
            if (arr[i] == n)
                cnt++;
        }
        if (cnt > 2)
        {
            cout << "NO" << endl;
            chk = 1;
        }
        if (!chk)
        {
            cout << "YES" << endl;
            ll index[100001];
            fr(i, n)
            {
                index[arr[i]] = i;
            }
            sort(all(arr));
            vector<ll> ans(n, 0);
            vector<ll> ans2(n, 0);
            fr(i,n)
            {
                ans[index[arr[i]]] = arr[i];
                ans2[index[arr[i]]] = i+1;
            }
            fr(i, n)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
            fr(i, n)
            {
                cout << ans2[i] << " ";
            }
            cout << endl;
        }

    }
}