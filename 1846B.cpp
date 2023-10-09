// JAI SHREE GANESH
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
        string a, b, c;
        cin >> a >> b >> c;
        if (a[0] == a[1] and a[1] == a[2] and a[0]!='.')
        {
            cout << a[0] << endl;
            continue;
        }
        if (b[0] == b[1] and b[1] == b[2] and b[0]!='.')
        {
            cout << b[0] << endl;
            continue;
        }
        if (c[0] == c[1] and c[1] == c[2] and c[0]!='.')
        {
            cout << c[0] << endl;
            continue;
        }
      
        if (a[0] == b[1] and b[1] == c[2] and a[0]!='.')
        {
            cout << a[0] << endl;
            continue;
        }
       
        if (a[2] == b[1] and b[1] == c[0] and a[2]!='.')
        {
            cout << a[2] << endl;
            continue;
        }
        if(a[0]==b[0] and b[0]==c[0] and a[0]!='.')
        {
            cout<<a[0]<<endl;
            continue;
        }
        if(a[1]==b[1] and b[1]==c[1] and a[1]!='.')
        {
            cout<<a[1]<<endl;
            continue;
        }
        if(a[2]==b[2] and b[2]==c[2] and a[2]!='.')
        {
            cout<<a[2]<<endl;
            continue;
        }
        cout<<"DRAW"<<endl;
    }
}