#include <bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;

        string s2 = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int res = isSubstring(s1, s2);
        if (res == -1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
}