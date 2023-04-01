#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        int ans = (x + y) / 2;
        cout << max(abs(ans - x), abs(ans - y))<<endl;
    }
    return 0;
}
