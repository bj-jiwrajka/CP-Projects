#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a%b)
        {
           cout << b - (a % b) << endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
        
    }
    return 0;
}