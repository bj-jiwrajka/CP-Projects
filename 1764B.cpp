#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
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
        int gcdt = arr[0];
        for (int i = 0; i < n; i++)
        {
            gcdt = gcd(arr[i], gcdt);
        }
        ll max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                /* code */ max = arr[i];
            }
        }

        cout << max / gcdt << endl;
    }
    return 0;
}