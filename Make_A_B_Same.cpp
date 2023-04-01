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
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
            }
        }
        bool chk = 0;

        if (arr[0] != brr[0] or arr[n - 1] != brr[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if ((arr[i] == 1 and brr[i] == 0))
                {
                    cout << "NO" << endl;
                    chk = 1;
                    break;
                }
                if ((arr[i] == 0 and brr[i] == 1) and cnt == 0)
                {

                    cout << "NO" << endl;
                    chk = 1;
                    break;
                }
            }
            if (chk == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
}