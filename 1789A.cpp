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
        // sort(arr, arr+n);
        // if (__gcd(arr[0], arr[1]) > 2)
        // {
        //   cout<<"NO"<<endl;
        // }
        // else
        // {
        //     cout<<"YES"<<endl;
        // }
        
        

        bool chk = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) <= 2)
                {
                    cout << "YES" << endl;
                    chk = 1;
                    break;
                }
            }
            if (chk)
            {

                break;
            }
        }
        if (!chk)
        {
            cout << "NO" << endl;
        }
    }
}
