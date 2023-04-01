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
        string p, q;
        cin >> p >> q;
        ll pl = p.length();
        ll ql = q.length();
        bool chk = 0;
        if (p[0] == q[0])
        {
            cout << "YES" << endl;
            cout << p[0] << "*" << endl;
        }
        else if (p[pl - 1] == q[ql - 1])
        {
            cout << "YES" << endl;

            cout << "*" << p[pl - 1] << endl;
        }
        else
        {
            for (int i = 0; i < pl - 1; i++)
            {
                for (int j = 0; j < ql - 1; j++)
                {
                    if (p[i] == q[j] and p[i + 1] == q[j + 1])
                    {
                        cout << "YES" << endl;
                        cout << "*" << p[i] << p[i + 1] << "*" << endl;
                        chk = 1;
                        break;
                    }
                  
                }
                  if (chk)
                    {
                        break;
                    }
            }
            if (!chk)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}