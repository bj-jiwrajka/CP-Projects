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
        string s;

        cin >> s;
        ll cnt = 1;
        ll st = 1;
        ll n = s.length();
        if (s[0] == '0')
        {
            cout << "0" << endl;
            continue;
        }
        if (s[0] == '?')
        {
            st = 9;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] == '?')
            {
                cnt *= 10;
            }
        }
        // cnt *= 10;
        cout << cnt * st << endl;
    }
}