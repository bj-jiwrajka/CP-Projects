#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        ll ans = abs(c - a) + abs(d - b);
        ll min, max;
        if (a <= b and a <= n - a + 1 and a <= n - b + 1)
        {
            min = a;
        }
        else if (n - a + 1 <= a and n - a + 1 <= b and n - a + 1 <= n - b + 1)
        {
            min = n - a + 1;
        }
        else if (n - b + 1 <= a and n - b + 1 <= b and n - b + 1 <= n - a + 1)
        {
            min = n - b + 1;
        }
        else
        {
            min = b;
        }

        if (c <= d and c <= n - c + 1 and c <= n - d + 1)
        {
            max = c;
        }
        else if (n - c + 1 <= c and n - c + 1 <= d and n - c + 1 <= n - d + 1)
        {
            max = n - c + 1;
        }
        else if (n - d + 1 <= c and n - d + 1 <= d and n - d + 1 <= n - c + 1)
        {
            max = n - d + 1;
        }
        else
        {
            max = d;
        }


        ll final = min + max;
        if (ans <= final)
        {
            cout << ans << endl;
        }
        else
        {
            cout << final << endl;
        }
    }
    return 0;
}