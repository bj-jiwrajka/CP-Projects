#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    bool loo = 0;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool check = 0;
        int ans = 0;
        ll cl = 0, cr = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                cl++;
            }
            else
            {
                cr++;
            }
        }
        if (cl == n or cr == n)
        {
            cout << -1 << endl;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                check = 1;
            }
            if (check == 1 and s[i] == 'L')
            {
                cout << "0" << endl;
                loo = 1;
                break;
            }
        }
        if (loo == 0 and check == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'L')
                {
                    ans = i + 1;
                }
            }
            cout << ans << endl;
        }
    }
}