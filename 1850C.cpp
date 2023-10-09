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
   
        vector<vector<char>> v(8, vector<char>(8));
        fr(i, 8)
        {
            fr(j, 8)
            {
                cin >> v[i][j];
            }
        }
        int a=-1,b=-1;
        bool chk=0;
        fr(i, 8)
        {
            fr(j, 8)
            {
                if (v[i][j] >= 'a' and v[i][j] <= 'z')
                {
                    a = i;
                    b = j;
                    chk=1;
                    break;
                }
            }

            if(chk) break;
        }
        string ans="";
        for(int i=a;i<8;i++)
        {
            char c=v[i][b];
            if(c=='.') break;
            ans+=c;
        }
        cout<<ans<<endl;
    }
}