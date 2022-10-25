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
        string s;
        cin >> s;
        int cnta = 0;
        int cntq = 0;
        bool ans = 1;
        for (int i = n - 1; i >= 0; i++)
        {

            if (s[i] == 'Q')
            {
                cnta++;
            }
            else
            {
               cnta--;
            }
            if (cnta>0)
            {
                ans = 0;
            }
        }
        if (ans == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}