#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int a = abs(x - y);
        if (a % k)
        {
            cout << a / k + 1 << endl;
        }
        else
        {
            cout << a / k << endl;
        }
    }
    return 0;
}