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
        vector<string> v;
        while (n--)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        set<ll> s;
        for (auto it : v)
        {
            ll c = 0;
            for (auto i : it)
            {
                if (i == '1')
                    c++;
            }
            s.insert(c);
        }
        if (s.size() > 2)
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
    }
}