#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << "YES" << endl
                 << n << endl;
        }
        else
        {

            if (n - k == 1 or n - k == 2 or n - k == 3 or n - k < 0 or (n % 2 != 0 and k % 2 == 0))
            {
                cout << "NO" << endl;
            }
            else if (n % 2 == 0 and k % 2 != 0 and (n - 2 * (k - 1)) != 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << n - 2 * (k - 1) << endl;
            }
            else if (n % 2 != 0 and k % 2 != 0)
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                }
                cout << n - k + 1 << endl;
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << n / k << " ";
                }

                cout << n - (n / k) * (k - 1) << endl;
            }
        }
    }
    return 0;
}