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
        // ll p = n;
        // ll c = 0;
        // string s = to_string(p);
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == '9')
        //     {
        //         c++;
        //     }
        // }
        // if (c == s.size())
        // {
        //     for (int i = 0; i < s.size() / 2; i++)
        //     {
        //         cout << 45;
        //     }
        //     if (s.size() & 1)
        //     {
        //         cout << 4;
        //     }

        //     cout << " ";
        //     for (int i = 0; i < s.size() / 2; i++)
        //     {
        //         cout << 54;
        //     }
        //     if (s.size() & 1)
        //     {
        //         cout << 5;
        //     }
        //     cout<<endl;
        // }
        // else{

        // if (n % 20 == 19)
        // {
        //     cout << (n - 9) / 2 << " " << (n + 9) / 2 << endl;
        // }
        // else
        // {
        //     cout << n / 2 << " " << n - (n / 2) << endl;
        // }
        // }
        string s = to_string(n);
        bool check = 1;
        string ram = "", sam = "";

        for (int i = 0; i < s.size(); i++)
        {
            ll x = s[i] - '0';

            if ((s[i] - '0') % 2 == 0)
            {
                ram += (x / 2 + '0');
                sam += (x / 2 + '0');
            }
            else
            {
                if (check)
                {
                    ram += (x / 2 + '0');
                    sam += (x / 2 + 1 + '0');
                    check = 0;
                }
                else
                {
                    ram += (x / 2 + 1 + '0');
                    sam += (x / 2 + '0');
                    check = 1;
                }
            }
        }
        reverse(all(ram));

        while (ram.back() == '0' && ram.size() > 1)
            ram.pop_back();

        reverse(all(ram));

        reverse(all(sam));

        while (sam.back() == '0' && sam.size() > 1)
            sam.pop_back();

        reverse(all(sam));

        cout << ram << " " << sam << endl;
    }
}