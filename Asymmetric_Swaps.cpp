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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        ll crr[2 * n];
        for (int i = 0; i < n; i++)
        {
            crr[i] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            crr[i + n] = brr[i];
        }
        sort(crr, crr + 2 * n);
        ll ans = 0;
        ll minans = INT_MAX;
        for (int i = 0, j = n - 1; j < 2 * n; j++, i++)
        {
            ans = crr[j] - crr[i];
            if (ans < minans)
            {
                minans = ans;
            }
        }
        cout<<minans<<endl;
    }
}