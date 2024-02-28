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
        string s;
        cin >> s;
        ll n = s.length();
        ll z = 0, o = 0;
        fr(i, n)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        bool chk=0;
        fr(i,n)
        {
            if(s[i]=='1')
            {
                if(z)z--;
                else
                {
                    cout<<n-i<<endl;
                    chk=1;
                    break;
                }
            }
            else
            {
                if(o)o--;
                else
                {
                    cout<<n-i<<endl;
                    chk=1;
                    break;
                }
            }
        }
        if(!chk)
        {
            cout<<0<<endl;
        }
    }
}