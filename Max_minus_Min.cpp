#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max, min;
        if (a > b and a > c)
        {
            max = a;
        }
        else if (b > a and b > c)
        {
            max = b;
        }
        else if (c > a and c > b)
        {
            max = c;
        }
        if (a < b and a < c)
        {
            min = a;
        }
        else if (b < c and b < a)
        {
            min = b;
        }
        else if (c < a and c < b)
        {
            min = c;
        }

        cout << max - min << endl;
    }
    return 0;
}
