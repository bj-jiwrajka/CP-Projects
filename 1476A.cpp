#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << k << endl;
        }
        else if (n == 2)
        {
            cout << (k + 1) / 2 << endl;
        }
        else if (n >= k and n % k == 0)
        {
            cout << 1 << endl;
        }
        else if (n >= k and n % k != 0)
        {
            cout << 2 << endl;
        }
        else if (k % n == 0)
        {
            cout << (k / n) << endl;
        }
        else
        {
            cout << (k / n) + 1 << endl;
        }
    }
    return 0;
}