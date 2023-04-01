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
        string s1, s2;
        cin >> s1 >> s2;
        int scr = 0;
        int asci;
        for (int i = 0; i < n; i++)
        {
            asci = int(s1[i]) - int(s2[i]);
            if ((asci <= 13 and asci >= 1))
            {
                scr = scr - abs(asci);
            }
            else if (asci <= -13 and asci >= -26)
            {
                scr = scr - 26 + abs(asci);
            }
            else if (asci > 13)
            {
                scr = scr + 26 - abs(asci);
            }

            else
            {
                scr = scr + abs(asci);
            }
            // cout<<asci<<" ";
        }
        // cout<<endl;

        int ans = (scr + 26) % 26;
        if (ans < 13)
        {
            cout << ans << endl;
        }
        else
        {

            cout << 26 - ans << endl;
        }
    }
    return 0;
}
