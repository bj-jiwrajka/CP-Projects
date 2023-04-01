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

        int c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
                i++;
            }
        }

        if (n % 2 == 0 and c * 2 == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}