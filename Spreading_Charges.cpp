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
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i <s.size(); i++)
        {

            if (s[i] != '0')
            {

                v.push_back(i);
            }
        }
        if (v.size() == 0)
        {
            cout << n << endl;
        }
        else if (v.size() == 1)
        {
            cout << 0<< endl;
        }
        else
        {

            ll cnt = 0;
            for (int i = 0; i < v.size()-1; i++)
            {
                if (s[v[i]] != s[v[i + 1]])
                {
                    if ((v[i + 1] - v[i]) % 2 == 0)
                    {
                        cnt++;
                    }
                }
            }
            cout << cnt << endl;
        }
    }
}