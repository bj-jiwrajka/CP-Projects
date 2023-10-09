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
        string a, s;
        cin >> a >> s;
        int n = s.length();
        int m = a.length();
        int i = n - 1;
        int j = m - 1;
        string b = "";
        while (i >= 0 && j >= 0)
        {
            if (s[i] > a[j])
            {
                char ch = s[i] - a[j] + '0';
                b += ch;
                i--;
                j--;
            }
            else
            {

                int aa = s[i] - '0';
                int bb = s[i - 1] - '0';
                int cc = a[j] - '0';
                int dd = bb * 10 + aa;
                char ch = dd - cc + '0';
                b += ch;
                i -= 2;
                j--;
            }
        }
        // while(i>=0)
        // {
        //     b+=s[i];
        //     i--;
        // }
        reverse(b.begin(), b.end());
        cout << b << endl;
    }
}