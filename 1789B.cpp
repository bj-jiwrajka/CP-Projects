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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        ll i = 0, j = n-1;
        bool chk=0;
        while (i < j)
        {
            if ((ans == 0 or ans == 2) and s[i] == s[j])
            {
                i++;
                j--;
                
            }

            else if (ans == 1 and s[i] == s[j])
            {

                i++;
                j--;
                ans = 2;
            }
            else if ((ans == 0 or ans == 1) and s[i] != s[j])
            {
                i++;
                j--;
                ans = 1;
            }
            else
            {
                cout << "No" << endl;
                chk=1;
                break;
            }
        }
        if (chk==0 or i>j)
        {
            cout<<"Yes"<<endl;
        }
        
    }
}