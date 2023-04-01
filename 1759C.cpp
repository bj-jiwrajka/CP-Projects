#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (abs(a - b) >= x)
        {
            cout << 1 << endl;
        }
        else if (a - x <= l and a + x > r)
        {
            cout << -1 << endl;
        }
        else if (a + x + abs(a - b) < r or (a + x < r and a + x - (x + abs(a - b)) < r))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}