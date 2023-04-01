#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        ll cnt = 0;
        if (a == c) cnt++;
         if(c == e) cnt++;
         if(a == e) cnt++;
          if(b== d ) cnt++;
          if(b == f)cnt++;
           if(d == f) cnt++;
        if (cnt > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}