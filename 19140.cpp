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
        string s;
        cin >> s;
        vector<ll> v(26, 0);
        for (int i = 0; i < n; i++)
            v[s[i] - 'A']++;
        ll c = 0;
        for (ll i = 0; i < 26; i++)
        {
            if (v[i] > i)
                c++;
        }
        cout << c << endl;
    }
}