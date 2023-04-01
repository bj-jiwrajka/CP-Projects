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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        ll check = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == check)
            {
                check++;
            }
            else
            {
                ans++;
            }
        }

        if (ans)
        {
            cout << (ans - 1) / k + 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}