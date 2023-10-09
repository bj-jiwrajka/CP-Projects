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
        ll m;
        cin >> m;
        string s1, s2;
        cin >> s1 >> s2;
        bool c1 = 0, c2 = 0;

        reverse(s2.begin(), s2.end());
        s1 += s2;
        // cout<<s1;
        bool chk=0;
        fr(i, n+m - 1)
        {
            if (s1[i] == s1[i + 1])
            {
                if (c1 == 0)
                    c1 = 1;
                else
                {
                    cout << "NO" << endl;
                    chk=1;
                    break;
                }
            }
        }
        if(!chk)
        cout << "YES" << endl;
    }
}