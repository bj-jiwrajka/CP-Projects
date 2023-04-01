#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> M;
        for (int i = 0; s[i]; i++)
        {

            if (M.find(s[i]) == M.end())
            {
                M.insert(make_pair(s[i], 1));
            }
            else
            {
                M[s[i]]++;
            }
        }
        bool ans = 0;
        for (auto it : M)
        {
            if (it.second % 2 == 1)
            {
                ans = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!ans)
        {
            cout << "YES" << endl;
        }
    }
}