#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;

        if (n % 4 == 0)
        {
            ll sum1 = 0, sum2 = 0;
            cout << "YES" << endl;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << 2 * i << " ";
                sum1 += 2 * i;
            }
            for (int i = 1; i <= (n / 2) - 1; i++)
            {
                cout << 2 * i - 1 << " ";
                sum2 += 2 * i - 1;
            }
            cout << sum1 - sum2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}