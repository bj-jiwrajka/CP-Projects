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
        vector<vector<char>> v(10, vector<char>(10));
        fr(i, 10)
        {
            fr(j, 10)
            {
                cin >> v[i][j];
            }
        }
        ll ans = 0;
        if (v[4][4] == 'X')
            ans += 5;
        if (v[4][5] == 'X')
            ans += 5;
        if (v[5][4] == 'X')
            ans += 5;
        if (v[5][5] == 'X')
            ans += 5;

        for (ll i = 3; i <= 6; i++)
        {
            if (v[3][i] == 'X')
                ans += 4;
        }
        for (ll i = 3; i <= 6; i++)
        {
            if (v[6][i] == 'X')
                ans += 4;
        }
        if (v[4][3] == 'X')
            ans += 4;
        if (v[4][6] == 'X')
            ans += 4;
        if (v[5][3] == 'X')
            ans += 4;
        if (v[5][6] == 'X')
            ans += 4;

        for (ll i = 2; i <= 7; i++)
        {
            if (v[2][i] == 'X')
                ans += 3;
        }

        for (ll i = 2; i <= 7; i++)
        {
            if (v[7][i] == 'X')
                ans += 3;
        }

        for (ll i = 3; i < 7; i++)
        {
            if (v[i][2] == 'X')
                ans += 3;
        }
        for (ll i = 3; i < 7; i++)
        {
            if (v[i][7] == 'X')
                ans += 3;
        }

        for (ll i = 1; i <= 8; i++)
        {
            if (v[1][i] == 'X')
                ans += 2;
        }

        for (ll i = 1; i <= 8; i++)
        {
            if (v[8][i] == 'X')
                ans += 2;
        }

        for (ll i = 2; i <= 7; i++)
        {
            if (v[i][1] == 'X')
                ans += 2;
        }
        for (ll i = 2; i <= 7; i++)
        {
            if (v[i][8] == 'X')
                ans += 2;
        }
        for (ll i = 0; i <= 9; i++)
        {
            if (v[i][0] == 'X')
                ans += 1;
        }
        for (ll i = 0; i <= 9; i++)
        {
            if (v[i][9] == 'X')
                ans += 1;
        }
        for (ll i = 1; i <= 8; i++)
        {
            if (v[0][i] == 'X')
                ans += 1;
        }
        for (ll i = 1; i <= 8; i++)
        {
            if (v[9][i] == 'X')
                ans += 1;
        }
        cout << ans << endl;
    }
}