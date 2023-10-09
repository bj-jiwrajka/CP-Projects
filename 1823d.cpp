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

        ll k;
        cin >> k;

        vector<ll> arr(k, 0);
        fr(i, k)
        {
            cin >> arr[i];
        }
        vector<ll> brr(k, 0);
        fr(i, k)
        {
            cin >> brr[i];
        }
        bool chk = 0;
        fr(i, k)
        {
            if (brr[i] > arr[i])
            {
                cout << "NO" << endl;
                chk = 1;
                break;
            }
        }
        bool eq = 0;
        string ans;
        fr(i, n)
        {
            char c = 'a' + i;
            ans += c;
        }
        if (!chk)
        {
            ll key = 0;
            fr(i, k)
            {
                if (arr[i] > brr[i])
                {
                    ll mn = (arr[i] % brr[i]) + brr[i]-1;
                    for (ll j = brr[i] + key; j < arr[i]; j++)
                    {
                        char c = ans[j] - mn;
                        ans[j] = c;
                        // cout<<ans[j]<<" ";
                    }
                    // cout<<endl;
                    key = arr[i] - brr[i];
                    // for (ll j = arr[i]; j < n; j++)
                    // {
                    //     int diff = arr[i] - brr[i];
                    //     int c = ans[j];
                    //     c -= diff;
                    //     char d = c;
                    //     ans[j] = d;
                    // }

                    eq = 1;
                }

                else if (eq)
                {
                    cout << "NO" << endl;
                    chk = 1;
                    break;
                }
            }
        }
        if (!chk)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}