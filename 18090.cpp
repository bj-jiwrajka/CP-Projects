// Let's begin
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define inp(v)
#define all(x) (x).begin(), (x).end()
typedef long double lld;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        char brr[10] = {0};

        string s;
        cin >> s;
        set<int> st;
        for (int i = 0; i < 4; i++)
        {
            st.insert(s[i]);
        }
        bool chk = 1;
        ll cnt = 1;
        if (st.size() == 1)
        {
            cout << -1 << endl;
        }
        else if (st.size() == 2)
        {
            sort(s.begin(), s.end());
            cnt = 0;

            for (int i = 0; i < 4; i++)
            {

                for (int j = i + 1; j < 4; j++)
                {
                    if (s[j] == s[i])
                    {
                        cnt++;
                    }
                    if (cnt == 3)
                    {
                        cout << 6 << endl;
                        chk = 0;
                        break;
                    }
                }
                if (chk == 0)
                {
                    break;
                }
            }
            if (chk)
            {
                cout << 4 << endl;
            }
        }
        else
        {
            cout << 4 << endl;
        }
    }
}