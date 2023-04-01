#include <bits/stdc++.h>
#define ll long long
int min(int a, int b)
{
    return (a < b) ? a : b;
}
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ll c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i]=='1')
                c2++;
            else
            {
                c1++;
            }
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i]=='1')
                c4++;
            else
            {
                c3++;
            }
        }
        // cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
        ll ans = min(c2, c3) + min(c1, c4);
        // cout<<ans<<endl;
        for (int i = 0; i < ans; i++)
        {
            cout << 1;
        }
        for (int i = 0; i < s1.length() - ans; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
}