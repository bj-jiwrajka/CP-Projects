// JAI SHREE GANESH
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
        string s;
        cin >> s;
        ll n = s.length();
        ll i = n - 1;
        ll ind = n;
        bool chk=0;
        while (i >= 0)
        {
            if (s[i] >= '5')
            {
                if(i)
                s[i - 1]++;
                else chk=1;
                ind = i;
            }
            i--;
        }
        if (s[0] >= '5')
        {
            ind = 0;
        }
        for (ll j = ind; j < n; j++)
        {
            s[j] = '0';
        }

        if (chk)
        {
            s[0] = '0';
            s = '1' + s;
        }

        cout << s << endl;
    }
}