#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, d, D;
        cin >> D >> d >> p >> q;
        int i = 0;
        int sum = 0;
        while (i < D / d)
        {
            sum += (p + (i * q)) * (d);

            i++;
        }
        cout << sum + ((p + (i * q)) * (D % d)) << endl;
    }
    return 0;
}