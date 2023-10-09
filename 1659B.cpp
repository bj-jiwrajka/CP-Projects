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
        ll k;
        cin >> k;
        string s;
        cin >> s;
        vector<ll> num(n, 0);
        ll cnt = 0;
        if (k == 0)
        {
            cout << s << endl;
            for (auto it : num)
            {
                cout << it << " ";
            }
            cout << endl;
            continue;
        }
        if (k & 1)
        {

            fr(i, n)
            {
                if (k > 0 and s[i] == '1')
                {
                    num[i] = 1;
                    k--;
                }
                else if (k > 0 and s[i] == '0')
                {
                    num[i] = 0;
                    s[i] = '1';
                }
                else if (k == 0)
                {
                    if (s[i] == '1')
                    {
                        s[i] = '0';
                    }
                    else
                    {
                        s[i] = '1';
                    }
                }
            }
            if (k > 0)
                num[n - 1] += k;
            if (k & 1 and s[n - 1] == '1')
                s[n - 1] = '0';
            else if (k & 1 and s[n - 1] == '0')
                s[n - 1] = '1';
        }
        else
        {
            fr(i, n)
            {
                if (k > 0 and s[i] == '1')
                {
                    num[i] = 0;
                }
                else if (k > 0 and s[i] == '0')
                {
                    num[i] = 1;
                    k--;
                    s[i] = '1';
                }
                // else if (k == 0)
                // {
                //     if (s[i] == '1')
                //     {
                //         s[i] = '0';
                //     }
                //     else
                //     {
                //         s[i] = '1';
                //     }
                // }
            }

            if (k > 0)
                num[n - 1] += k;
            if (k & 1 and s[n - 1] == '1')
                s[n - 1] = '0';
            else if (k & 1 and s[n - 1] == '0')
                s[n - 1] = '1';
        }
        cout << s << endl;
        for (auto it : num)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}