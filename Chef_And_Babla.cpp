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
        ll an = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cout << -1 << endl;
                an = 0;
                break;
            }
        }
        ll c = 0;
        if (an == 1)
        {
            sort(arr, arr + n);
            ll p, q;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > 0)
                {
                    p = i;
                    q = i - 1;
                    c++;
                    break;
                }
            }

            if (c == 0)
            {
                cout << abs((arr[n-1])) - 1 << endl;
            }
            else
            {
                if (q < 0 or abs(arr[q]) > arr[p])
                {
                    cout << arr[p] - 1 << endl;
                }
                else
                {
                    cout << abs((arr[q])) - 1 << endl;
                }
            }
        }
    }
}