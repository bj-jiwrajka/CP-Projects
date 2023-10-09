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
        ll n;
        cin >> n;
        ll m;
        cin >> m;
        vector<string> v(n);
        fr(i, n)
        {
            cin >> v[i];
        }
        int cnt = 0;
        char ch = 'v';
        int i = 0;
        while (i < m)
        {
            if (cnt == 1)
                ch = 'i';
            else if (cnt == 2)
                ch = 'k';
            else if (cnt == 3)
                ch = 'a';
            fr(j, n)
            {
                if (v[j][i] == ch)
                {
                    cnt++;
                    break;
                }
            }
            if(cnt==4) break;
            i++;
        }
        if (cnt == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}