#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 19 << " ";
            }
            cout<<endl;
        }
        else
        {
            cout << 1 << " " << 3 << " ";
            for (int i = 0; i < n - 2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}