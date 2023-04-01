#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int p, n, z;
        int arr[3];
        int a, b, c;
        cin >> a >> b >> c;
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] < 0)
            {
                n++;
            }
            else if (arr[i] == 0)
            {
                z++;
            }
            else
            {
                p++;
            }
        }
        if ((p == 1 and n == 1) or (p == 2 and n == 1) or (n == 2 and p == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
