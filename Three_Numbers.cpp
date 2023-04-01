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
        ll arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;
    
            sort(arr, arr + 3);

            if (arr[0] == arr[1] and arr[1] == arr[2])
            {
                cout <<0 << endl;
            }

            else if ((arr[2] - arr[0])&1 or (arr[1] - arr[0])&1 or (arr[2] - arr[1])&1 )
            {
                cout << -1 << endl;
            }

            else
            {
                ans = (arr[1] - arr[0]) / 2;
                arr[0] += ans;
                arr[1] -= ans;
                arr[2] += ans;
                ans= ans +(arr[2]-arr[0])/2;
                cout<<ans<<endl;

            }
        }
}