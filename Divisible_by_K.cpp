#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        bool ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> v;
        for (int i = 0; i < n; i++)
        {
            ll w=arr[i];
            for (int i = 2; i * i <= w; i++)
            {
                while (w% i == 0)
                {
                    w /= i;
                    v[i]++;
                }
            }
            v[w]++;
        }
v[1]++;
        for (int i = 2; i * i <= k; i++)
        {
            if (k % i == 0 && v[i] == 0)
            {
                // cout << "NO" << endl;
                ans = 1;
            }
            while (k % i == 0)
                k /= i;
        }
        if (v[k] == 0)
        {
            ans = 1;
        }
        if (ans)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
        }
    }
}
