#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    if (x >= 0)
    {

        int sqr = sqrt(x);
        return (sqr * sqr == x);
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 0;
        while ((n - i * i) * (n - i * i) >= 0)
        {
            if (isPerfectSquare(n - i * i))
            {
                cout << i << " " << sqrt(n - i * i) << endl;
                break;
            }
            i++;
        }

        if (n - i * i < 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
