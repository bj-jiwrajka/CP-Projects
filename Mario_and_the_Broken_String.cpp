#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        bool ans = 1;
        for (int i = 0; i <n/2; i++)
        {
            if (s[i] != s[(n / 2) + i])
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
            cout << "YES" << endl;
        }
    }
}