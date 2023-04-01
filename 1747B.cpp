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
            cout << (n / 2) + 1 << endl;
            for (int i = 0; i < (n / 2)+1; i++)
            {
                 cout<<3*i + 2<<" "<<3*n-3*i<<endl;
            }
        }
        else
        {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
            {
               cout<<3*i + 2<<" "<<3*n-3*i<<endl;
            }
        }
    }
    return 0;
}
