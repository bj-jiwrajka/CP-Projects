#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, a, b, p, q;
        cin >> x >> y;

        cin >> a >> b;
        p = (abs(x - y)) * a + min(x, y) * b;
        q = (x + y) * a;
        cout << min(p, q) << endl;
    }
    return 0;
}
