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
        if (k >= n / 2)
        {
            cout << n * (n - 1) / 2 << endl;
        }
        else
        {
            cout << (n * (n - 1) / 2)-((n-2*k)*(n-2*k-1)/2)<< endl;
        }
    }
}