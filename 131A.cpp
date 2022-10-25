#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ch;
    int cnt = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            cnt++;
        }
    }
    if (cnt == s.length() - 1)
    {
        if (isupper(s[0]))
        {
            cout << char(s[0] + 32);
        }
        else
        {
            cout << char(s[0] - 32);
        }

        for (int i = 1; i < s.length(); i++)
        {
            ch = tolower(s[i]);
            cout << ch;
        }
        cout << endl;
    }

    else
    {
        cout << s << endl;
    }
    return 0;
}