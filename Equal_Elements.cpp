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
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        ll cnt = 0;
        ll max = INT_MIN;
        for (auto i : mp)
        {
            if (i.second > max)
            {
                // cnt++;
                max = i.second;
                cnt=i.first;
            }
        }
        ll monu=0;
       for (int i = 0; i < n; i++)
       {
        if (arr[i]!=cnt)
        {
            monu++;
        }
        
       }
       cout<<monu<<endl;
       
    }
}