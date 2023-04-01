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
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll cnt1 = 0, pin = 0, maxpin = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt1++;
                pin++;
            maxpin = max(maxpin, pin);

            }
            else if (arr[i] == 2 and cnt1 > 0)
            {
                pin = cnt1 / 2 + 1;
            maxpin = max(maxpin, pin);

            }
        }

        cout << maxpin << endl;
    }
}