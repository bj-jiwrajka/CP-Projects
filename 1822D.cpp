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
        // vector<ll> arr(n, 0);
        // fr(i, n)
        //{
        // cin >> arr[i];
        // }

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n << " ";
            // for (int i = 2; i < n; i = i + 2)
            // {
            //     cout << i << " ";
            // }
            for (int i = n - 1; i > 1; i = i - 2)
            {
                cout << i << " "<<n+1-i<<" ";

            }
            cout<<1<<endl;
        }
    }
}