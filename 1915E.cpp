// Name - Bijay Jiwrajka
// Scholar ID - 2112055
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
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
        ll sum = 0;
        vector<ll> v;
        bool chk = 0;
        fr(i, n)
        {
            if(i%2==0)
            sum += arr[i];
            else
            sum -= arr[i];
            v.pb(sum);
        }
        map<ll, ll> mp;
        for (auto it : v)
        {
            if (it == 0)
            {
                chk = 1;
                cout << "YES" << endl;
                break;
            }
            mp[it]++;
        }
        for (auto it : mp)
            if (it.second > 1 and !chk)
            {
                chk = 1;
                cout << "YES" << endl;
                break;
            }
        if (chk == 0)
            cout << "NO" << endl;
    }
    return 0;
}

// 2 10 4 6 8
//  5 4 9 7