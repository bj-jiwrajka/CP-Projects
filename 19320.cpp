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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c=0;
        ll ans=n;
        fr(i,n-1)
        {
            if(s[i]=='*' and s[i+1]=='*')
            {
                ans=i;
                break;
            }
        }
        fr(i,ans)
        {
            if(s[i]=='@') c++;
        }
        cout<<c<<endl;
    }
}