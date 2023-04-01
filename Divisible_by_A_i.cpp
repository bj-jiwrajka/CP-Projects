#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll res = arr[0];
        for (int i = 0; i < n; i++)
        {
            res = __gcd(arr[i], res);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] / res << " ";
        }
        cout << endl;
    }
    return 0;
}