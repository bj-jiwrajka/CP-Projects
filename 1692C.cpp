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
        bool chk=0;
        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
                if(v[i][j]=='#' and v[i+1][j+1]=='#' and v[i+1][j-1]=='#' and v[i-1][j+1]=='#' and v[i-1][j+1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    chk=1;
                    break;
                }
            }
            if(chk==1)
            {
                break;
            }
        }
    }
}