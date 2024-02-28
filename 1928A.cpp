// Name - Bijay Jiwrajka
// Scholar ID - 2112055
#include <bits/stdc++.h>
// #include<appiness.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define ll long long
#define take(a) \
    ll a;       \
    cin >> a;
#define fr(i, n) for (ll i = 0; i < n; i++)
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
        ll a, b;
        cin >> a >> b;
        ll chk = 1;
        if (a & 1 and b & 1)
        {
            chk = 0;
        }
        if (!(a & 1) and !(b & 1))
        {
            chk = 2;
        }
        if (chk == 0)
        {
            cout << "No" << endl;
            continue;
        }
        if (chk == 1)
        {
            if (a & 1)
            {
                if (b / 2 == a)
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
            else
            {
                if (a / 2 == b)
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}