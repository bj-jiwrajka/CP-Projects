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
        ll k;
        cin >> k;
        string s;
        cin >> s;
        bool chk = 0;
        ll c = 0;
        fr(i, n)
        {
            if (s[i] == '0')
                c--;
            else
                c = k;
            if (c < 0)
            {
                chk = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!chk)
            cout << "YES" << endl;
    }
}