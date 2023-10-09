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
        vector<ll> arr(n, 0);
        fr(i, n)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        vector<pair<ll, ll>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({arr[i],i+1});
        }
        
        sort(arr.begin(), arr.end());
        sort(p.begin(), p.end());
      
        for (int i = 0; i < n && arr[i]*arr[i] <= (2 * n); i++)
        {
            for (int j = i + 1; j < n ; j++)
            {
                if (arr[i] * arr[j] == (p[i].second)+(p[j].second) )
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}