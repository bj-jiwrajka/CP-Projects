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
        ll brr[n];
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll cnt = 0, maxcnt = -1;
        ll l = -1, r = -1;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (arr[i] <= arr[i + 1])
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         cnt = 0;
        //     }
        //     if (cnt >= maxcnt)
        //     {
        //         maxcnt = cnt;
        //         l = i;
        //     }
        // }
        // cout << l + 2 - maxcnt << " " << l + 2 << endl;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                l = i + 1;
                break;
            }
        }

        for (int i = n - 1; i >= l - 1; i--)
        {
            if (arr[i] != brr[i])
            {
                r = i + 1;
                break;
            }
        }
        for (int i = l - 1; i > 0; i--)
        {
            if (arr[i] >= arr[i - 1])
            {
                l--;
            }
            else
            {
                break;
            }
        }
        // i=r or r-1
        // cout<<r<<"h"<<endl;

        for (int i = r-1; i < n - 2; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                r++;
            }
            else
            {
                break;
            }
        }
        cout << l << " " << r << endl;

    }
}